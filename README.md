# Graphics Driver for Traveo II Cluster

This middleware provides a standalone driver for the graphics subsystem Traveo II Cluster devices. It is a precompiled binary along with headers that provide the driver API. The following devices are supported by this driver:
- CYT4DNJBZS

## Functional Description

The graphics subsystem integrates internal video RAM, a 2D graphics core, and interfaces for video input and output processing. Target use case is to drive low- and mid-end automotive cluster and head-up displays up to HD 720p resolution. Alternatively, the subsystem can operate in video feed-through mode for high-end applications up to Wide HD (2880x1080). This makes TVII-C-2D devices a safety companion to a non-Automotive graphics SoC and can overlay or autonomously display safety relevant elements.

The key function is an option to render graphics directly to display (on-the-fly) instead of to a frame buffer in RAM. This enables the internal video RAM to become sufficient for 720p graphics and allows customers to save BOM cost, because the system does not require external DDR RAM. While this technique is common for simple sprite graphics, it is unique in context of 2D GPUs with sophisticated operations such as image rotation and perspective correction (2.5D).

## Features

- Graphics core for rendering 2D
  - Image size up to 1600 x 800 pixels
  - All standard blit operations
  - Image scaling and rotation by any angle
  - Perspective correction for 3D effects (2.5D)
  - Compressed source images (lossless or lossy)
  - Accelerator for vector drawing (Bezier curve rasterization)
  - Command sequencer to minimize CPU interaction
  - Can render on-the-fly to display (except vector drawing)
- Display and composition engines
  - Two independent video output streams (such as cluster and HUD)
  - 220 MHz pixel clock, 2880 x 1080 active pixels, RGB format
  - Five transparent layers in total (alpha blending)
  - 26 windows in total (individual setup and frame buffers)
  - Four independent layer composition streams (safety)
  - One layer can be warped on-the-fly (HUD)
  - One layer can be upscaled on-the-fly
  - Gamma correction and dithering
  - CRC check on eight regions per display (safety)
- Capture engine for one video input stream
  - 220 MHz pixel clock, 2880 x 1080 active pixels (See device datasheet for the formats supported)
  - Frame rate conversion via ring buffer in video RAM
  - Downscaling (only if display does not upscale)
  - Feed-through on-the-fly to display with graphics overlay
- Video I/O interfaces (with maximum supported pixel clock frequencies)
  - Two FPD-link outputs (110 MHz) or 1 dual-channel output (220 MHz)
  - Two TTL outputs 24 bpp parallel (80 MHz) One TTL input 24 bpp parallel (80 MHz) or 8-/10-bit ITU 656 (40 MHz)
  - One MIPI CSI-2 input, maximum four lanes(220 MHz)
- JPEG decoder
  - JPEG image decompression from source to destination buffer in memory
  - Sequential 8-bit per sample Huffman decoding
  - Color formats YUV, gray scale, and RGB
  - YUV sub-sampling formats 4:4:4, 4:2:2, 4:2:0, and 4:1:1
  - Any image size between 1×1 and 16384×16384 pixels
  - Video performance up to 2880×1080 at 60 Hz
  - Packed destination buffers for YUV 4:4:4, gray, and RGB (8 and 24 bpp)
  - Semi-planar destination buffers for YUV 4:2:2, 4:1:1, and 4:2:0 (8 and 16 bpp)
  - Chroma up-conversion to 4:4:4 for all formats by sample replication

## More information

For more information, refer to the following documents:

* [KIT_T2G_C-2D-6M_LITE](https://www.infineon.com/cms/en/product/evaluation-boards/kit_t2g_c-2d-6m_lite/)
* [ModusToolbox Software Environment, Quick Start Guide, Documentation, and Videos](https://www.infineon.com/cms/en/design-support/tools/sdk/modustoolbox-software)
* [Infineon Technologies AG](https://www.infineon.com)

---
© 2025, Cypress Semiconductor Corporation (an Infineon company) or an affiliate of Cypress Semiconductor Corporation.
