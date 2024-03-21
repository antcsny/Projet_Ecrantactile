################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.c \
C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.c \
C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.c \
C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.c \
C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.c 

C_DEPS += \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.d \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.d \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.d \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.d \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.d 

OBJS += \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.o \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.o \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.o \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.o \
./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.o: C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.c Drivers/BSP/STM32H743I-EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DST -DUSE_HAL_DRIVER -DUSE_BPP=16 -DSTM32H743xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/STM32H743I-EVAL -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.o: C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.c Drivers/BSP/STM32H743I-EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DST -DUSE_HAL_DRIVER -DUSE_BPP=16 -DSTM32H743xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/STM32H743I-EVAL -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.o: C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.c Drivers/BSP/STM32H743I-EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DST -DUSE_HAL_DRIVER -DUSE_BPP=16 -DSTM32H743xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/STM32H743I-EVAL -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.o: C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.c Drivers/BSP/STM32H743I-EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DST -DUSE_HAL_DRIVER -DUSE_BPP=16 -DSTM32H743xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/STM32H743I-EVAL -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.o: C:/TouchGFXProjects/Morpion/Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.c Drivers/BSP/STM32H743I-EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DST -DUSE_HAL_DRIVER -DUSE_BPP=16 -DSTM32H743xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../Drivers/BSP/STM32H743I-EVAL -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32H743I-2d-EVAL

clean-Drivers-2f-BSP-2f-STM32H743I-2d-EVAL:
	-$(RM) ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.cyclo ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.d ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.o ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_bus.su ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.cyclo ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.d ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.o ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_io.su ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.cyclo ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.d ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.o ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_qspi.su ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.cyclo ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.d ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.o ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_sdram.su ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.cyclo ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.d ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.o ./Drivers/BSP/STM32H743I-EVAL/stm32h743i_eval_ts.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32H743I-2d-EVAL

