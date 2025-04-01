/*******************************************************************************
* (c) 2019-2024, Cypress Semiconductor Corporation (an Infineon company) or an *
* affiliate of Cypress Semiconductor Corporation.  All rights reserved.        *
*                                                                              *
* This software, including source code, documentation and related              *
* materials ("Software"), is owned by Cypress Semiconductor Corporation or     *
* one of its affiliates ("Cypress") and is protected by and subject to         *
* worldwide patent protection (United States and foreign), United States       *
* copyright laws and international treaty provisions. Therefore, you may use   *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software ("EULA").             *
*                                                                              *
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,     *
* non-transferable license to copy, modify, and compile the                    *
* Software source code solely for use in connection with Cypress's             *
* integrated circuit products.  Any reproduction, modification, translation,   *
* compilation, or representation of this Software except as specified          *
* above is prohibited without the express written permission of Cypress.       *
*                                                                              *
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO                         *
* WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING,                         *
* BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED                                 *
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A                              *
* PARTICULAR PURPOSE. Cypress reserves the right to make                       *
* changes to the Software without notice. Cypress does not assume any          *
* liability arising out of the application or use of the Software or any       *
* product or circuit described in the Software. Cypress does not               *
* authorize its products for use in any products where a malfunction or        *
* failure of the Cypress product may reasonably be expected to result in       *
* significant property damage, injury or death ("High Risk Product"). By       *
* including Cypress's product in a High Risk Product, the manufacturer         *
* of such system or application assumes all risk of such use and in doing      *
* so agrees to indemnify Cypress against all liability.                        *
*******************************************************************************/

/**
    \file        ut_class_rlad.h
    \brief       This sample code can be used to compress a buffer using the ::CYGFX_SM_COMP_RLA,
                 ::CYGFX_SM_COMP_RLAD, or ::CYGFX_SM_COMP_RLAD_UNIFORM formats.
*/

#ifndef RLAD_H
#define RLAD_H


#define RLAD_VERSION 1.02 /**< Version information of this file */

#include <assert.h>
#include <vector>
#include <fstream>
#include <queue>
using namespace std;


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_compression Utilities for compression
\{ */

/** \addtogroup ut_rla Utilities for RLA (Run Length Adaptive Compression)
    The code for this group can be used to create compressed buffers of the
    ::CYGFX_SM_COMP_RLA, ::CYGFX_SM_COMP_RLAD, and ::CYGFX_SM_COMP_RLAD_UNIFORM types.

    \note The header and source code for this function are included in the utility
          block delivered with the driver although it is not recommended to compress an image
          with the CPU on the target system. However, if required, this part can be used to create
          compression utilities for different platforms.
\{ */

//-----------------------------------------------------------------------------

#ifndef uint64
/** \name Unsigned 64-bit integer */
/** \{ */
typedef unsigned long long uint64;  /**< Type for unsigned 64-bit integer */
/** \} */
#endif

//-----------------------------------------------------------------------------
/** Structure for AXI read (only for AXI simulation) */
struct DecoderAxiReadStructure
{
    unsigned BaseAddress;   /**< Base address */
    unsigned pos;           /**< Position */
    unsigned size;          /**< Size */
    unsigned bits_in_pips;  /**< Bits in the pipe reading AXI */
    void* pObject;          /**< optional pointer for AXI transfer */
    /** Reset */
    void reset() { BaseAddress = 0; pos = 0; size = 0; bits_in_pips = 0; pObject = 0; }
    /** Constructor */
    DecoderAxiReadStructure() { reset(); }

};
/** This class contains the sample code for compression */
class RLAD
{
public:

    // Algorithm directives
    enum { NUM_C = 4 }; // Number of channels
    enum { MAX_BPC = 8 }; // Max number of bits per channel
    enum { CNT_RLAD = 8 }; // Number of pixels per package in Run Length Adaptive Dithering (RLAD) mode
    enum { MAX_CNT_RLA = 32 }; // Max number of pixels per package in RLA mode
    enum { MAX_CNT_RL = 128 }; // Max number of pixels per package in RL mode

    /** Configuration */
    enum Mode
    {
        MODE_RLAD, /**< Proprietary (lossy with upper limit for compression rate) */
        MODE_RLAD_UNIFORM, /**< Proprietary (lossy with fixed compression rate) */
        MODE_RLA, /**< Proprietary (lossless) */
        MODE_RL, /**< Standard RL format according to TGA spec (for backward compatibility) */
        NUM_MODE
    } mode; /**< Store the compression mode */
    unsigned width; /**< Frame dimension width in pixels */
    unsigned height; /**< Frame dimension height in pixels */
    unsigned bpc[NUM_C]; /**< Bits per channel and pixel of the uncompressed image */
    unsigned cbpc_max[NUM_C]; /**< Max value for compressed bits per channel and pixel (RLAD only) */

    // Parameters derived from configuration
    unsigned cbpc_width(unsigned i) const { return Log2(bpc[i]); } /**< Bit-width of cbpc fields in package headers */
    unsigned cnt_width() const { return Log2(MAX_CNT_RLA - 1); } /**< Return max bit size */
    unsigned cwrap(unsigned i) const { return (1 << bpc[i]); } /**< Return component size */
    unsigned max_code(unsigned i) const { return cwrap(i) - 1; } /**< Return max component value */
    unsigned header_size() const; /**< Calc header size */
    unsigned buffer_size() const; /**< Calc buffer size */
    unsigned bpp() const { unsigned r = 0; for (unsigned c = 0; c < NUM_C; c++) r += bpc[c]; return r; } /**< Return sum of component bpp */
    unsigned cbpp_max() const { unsigned r = 0; for (unsigned c = 0; c < NUM_C; c++) r += cbpc_max[c]; return r; } /**< Return sum of compressed component bpp */
    unsigned image_size() const { return width * height * bpp(); } /**< Return uncompressed image size */
    double compression_rate() const { return (double)buffer_size() / image_size() * 100; } /**< Return compression rate */

    // Status information
    bool decode_BufferTooSmall; /**< Buffer too small for decompression */
    bool decode_BufferTooLarge; /**< Buffer larger than required */

    //------------------------------------

    /** The Frame class is used to store the uncompressed image. */
    class Frame
    {
    public:

        /** Helper structure to store one pixel  */
        struct Pixel { unsigned col[NUM_C]; /**< Array with bit size for all components */ };

        /** Constructor
        \param[in] _width Frame width
        \param[in] _height Frame height
        */
        Frame(unsigned _width, unsigned _height) { width = _width; height = _height; dat.resize(width * height); ResetRead(); ResetWrite(); }

        /** \retval Pixel& Reads and returns one pixel */
        Pixel& Read() { assert(ridx < dat.size()); return dat[ridx++]; }
        /** Resets the read operation for frame start */
        void ResetRead() { ridx = 0; }

        /** Writes one pixel \param[in] pix Pixel */
        void Write(const Pixel& pix)
        {
            assert(widx < dat.size());
            dat[widx++] = pix;
        }
        /** Resets the write operation for frame start */
        void ResetWrite() { widx = 0; }

        /** Gets the pixel at position x, y
        \param[in] x X position
        \param[in] y Y position
        \retval Pixel Pixel at specified position */
        Pixel GetPixel(unsigned x, unsigned y) const { return dat[y * width + x]; }

        /** Gets width.
        \retval width. */
        unsigned GetWidth() { return width; }
        /** Gets height.
        \retval height. */
        unsigned GetHeight() { return height; }

    protected:
        /*! \cond PRIVATE */
        vector<Pixel> dat;
        unsigned ridx, widx;
        unsigned  width, height;
        /*! \endcond */
    };

    //------------------------------------

    /** The BitStream class is used to store the compressed image. */
    class BitStream
    {
        friend class RLAD;

    public:

        /** Constructor
            \param[in] big_endian Set true if system is big_endian.
        */
        BitStream(bool big_endian = false) { be = big_endian; Clear(); decode_AxiInterface = 0; }

        uint64 Size(bool real = false) const; /**< Size in bits */
        /** \retval bool Return true if BigEndian */
        bool IsBigEndian() const { return be; }

        /** Pushes bits to the compressed stream.
            \param[in] bits Number of bits in data
            \param[in] data Data to push
        */
        void Push(unsigned bits, unsigned data);
        /** Resets the stream */
        void Clear();

        /** Gets the word with the index of the BitStream.
            \param[in] index of word
            \param[out] value
            \retval true if success, false if index out of range
        */
        bool GetWord(unsigned index, unsigned& value);

        /** Reads bits from the compressed stream.
            \param[in] bits Number of bits to read
            \param[in,out] err Will be set to true if error occurs
            \retval unsigned Read data
        */
        unsigned Read(unsigned bits, bool* err = 0);
        /** reset Read operation to begin */
        void ResetRead();

        /** Get RLEWord offset.
            \retval RLEWord offset.
        */
        unsigned GetWordOffset() { return RLEWordOffset + ridx; }

        /** Get bit offset.
            \retval Bit offset.
        */
        unsigned GetBitOffset() { return rpos; }

        /** Get pixel offset.
            \retval pixel offset.
        */
        unsigned GetPixOffset() { return pkg_pix_offset; }

        /** Get credit.
            \retval credit.
        */
        unsigned GetCredit() { return credit_cnt; }

        /** Get processed word count.
            \retval Processed word count.
        */
        unsigned GetProcessedWordCount() { return processed_word_count; }

        /** Set RLEWord offset.
            \param[in] val RLEWord offset.
        */
        void SetWordOffset(unsigned val) { RLEWordOffset = m_dar.pos = val; }

        /** Set bit offset.
            \param[in] val Bit offset.
        */
        void SetBitOffset(unsigned val) { pkg_bit_offset = val; }

        /** Set pixel offset.
            \param[in] val Pixel offset.
        */
        void SetPixOffset(unsigned val) { pkg_pix_offset = val; }

        /** Set credit.
            \param[in] val Credit.
        */
        void SetCredit(unsigned val) { credit_cnt = val; }

        /** Set size.
            \param[in] val Size.
        */
        void SetSize(unsigned val) { m_dar.size = val; }

        // stream endianess:
        // 0 = data items are read from / written to 32-bit words from lsbit to msbit (little endian).
        // 1 = ...from msbit to lsbit (big endian)
        // Note: Endianness of memory access (HW) is irrelevant, but relevant for the encoder/decoder algorithms (HW and/or SW),
        // because data items of the stream are not necessarily 8 bits in size.

        // Required for callback to read the encoded data for decompressing
        bool (*decode_AxiInterface)(DecoderAxiReadStructure* pDAR, unsigned& raw); /**< Optional callback function to read AXI data */
        DecoderAxiReadStructure m_dar; /**< Structure of AXI read */

    protected:
        /*! \cond PRIVATE */
        unsigned int credit_cnt;  // Credit counter (only for RLAD mode)
        unsigned int pkg_pix_offset; // First pixel for the slice within the package (only for the RL mode)
        unsigned int pkg_bit_offset;   // Offset to the start of the package in bits
        unsigned int RLEWordOffset;
        bool be;
        vector<unsigned> s;
        unsigned wpos, rpos, ridx;
        uint64 ReadAvail(bool real = false) const; // Available number of bits for read
        unsigned processed_word_count;
        /*! \endcond */
    };

    //------------------------------------

    RLAD();
    ~RLAD() { if (dump) { of.close(); dump = 0x0; } };

    /** Encode picture with the defined mode
        \param[in] f Frame with pixel data with the defined mode
        \param[out] bs Empty bit stream. After return, this will contain the compressed stream.
                       For RL mode, the bit stream must be big endian; for all other modes, it must be little endian.
        \param[in] fast Only used for RL and RLA
                        false: Find the best packaging but requires more time and memory,
                        true: Requires less time and memory but may decrease the compression rate
    */
    bool Encode(Frame& f, BitStream& bs, bool fast = false);
    /** Decodes bit steam to image
        Supports recursive decoding line-by-line or full frame (frame dimension)
        \param[in] bs BitStream class containing the compressed data
        \param[out] f Store the uncompressed image
        \retval bool True if successful; false otherwise.
    */
    bool Decode(BitStream& bs, Frame& f);

    /** Sets the dump file.
        \param name Target file name
        \param pixels True if pixel dumping is enabled
        \retval bool True if successful; false otherwise.
    */
    bool SetDumpFile(const char* name, bool pixels = false);

    //------------------------------------

protected:
    /*! \cond PRIVATE */

    //------------------------------------

    /** Helper structure for RLA compression */
    struct Package // RLA only
    {
        RLAD* cfg; /**< Reference */

        bool delta; /**< Package type */
        unsigned pcnt; /**< Pixel count */
        unsigned cbpc[NUM_C]; /**< Bits per compressed component */
        unsigned cbpp; /**< Bits per compressed pixels */
        unsigned size; /**< Package size in bits */

        /** Offsets  the package */
        unsigned cofs[NUM_C], crange[NUM_C];

        /** delta package */
        unsigned start[NUM_C], prev[NUM_C];
        int dmin[NUM_C], dmax[NUM_C];

        Package(RLAD* _cfg) : cfg(_cfg) { Reset(); }
        Package() { }
        void SetRLAD(RLAD* _cfg) { cfg = _cfg; Reset(); }

        void Reset();
        void Add(const RLAD::Frame::Pixel& pix);
        void Serialize(queue<RLAD::Frame::Pixel>& fifo, RLAD::BitStream& bs, unsigned& pkg, unsigned& x, unsigned& y);
    };
    /** Helper structure for RL compression */
    struct PackageRL // RL only
    {
        bool delta; /**< Package type */
        unsigned pcnt; /**< Pixel count */
        unsigned color; // First color

        PackageRL() { Reset(); }
        void Reset() {
            delta = 0; pcnt = 0;
        }
        void Add(unsigned col);
        unsigned Size(unsigned bpp);
        void Serialize(queue<unsigned>& fifo, RLAD::BitStream& bs, unsigned bpp);
    };

    //------------------------------------

    ofstream of; /**< Dump file handle */
    bool dump, dump_pixels;

    bool Encode_Lossy(Frame& f, BitStream& bs);
    bool Encode_Lossless(Frame& f, BitStream& bs);
    bool Encode_LosslessExt(Frame& f, BitStream& bs);
    bool Encode_RL(Frame& f, BitStream& bs);
    bool Encode_RLExt(Frame& f, BitStream& bs);

    // Bit arithmetic

    void set_pbpc(unsigned* pbpc, unsigned* cbpc, unsigned& credit_cnt, unsigned pcnt);

    static unsigned SpatialDither(unsigned data_in, unsigned size_in, unsigned size_out, unsigned x, unsigned y, bool exact);
    static int ClampToBpc(unsigned data_in, unsigned bpc);
    static unsigned Log2(unsigned t);

    void DumpHeader(const char* method);
    /*! \endcond */
public:
    /** Expand bits for a channel through bit replication
        \param[in] data_in Input data
        \param[in] size_in Input data size
        \param[in] size_out Output data size
        \retval Output data
    */
    static unsigned MSBitReplication(unsigned data_in, unsigned size_in, unsigned size_out);

};

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

//-----------------------------------------------------------------------------

#endif
