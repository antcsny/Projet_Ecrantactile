# STM32F743i_EVAL TBS

The default IDE is set to STM32CubeIDE, to change IDE open the STM32F743i_EVAL.ioc with CubeMX and select from the supported IDEs (EWARM, MDK-ARM, and STM32CubeIDE). Supports flashing of the STM32F743i_EVAL board directly from TouchGFX Designer using GCC and STM32CubeProgrammer.Flashing the board requires STM32CubeProgrammer which can be downloaded from the ST webpage.

This TBS is configured for 480 x 640 pixels 16bpp screen resolution.

Performance testing can be done using the GPIO pins designated with the following signals: VSYNC_FREQ - Pin PB1, RENDER_TIME - Pin PA7, FRAME_RATE - Pin PA1, MCU_ACTIVE - Pin PA6.
