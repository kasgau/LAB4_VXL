################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Led7Segment.c \
../Core/Src/blink.c \
../Core/Src/fsm_automatic.c \
../Core/Src/fsm_manual.c \
../Core/Src/fsm_setting.c \
../Core/Src/global.c \
../Core/Src/input_processing.c \
../Core/Src/input_reading.c \
../Core/Src/main.c \
../Core/Src/scheduler.c \
../Core/Src/setTrafficLight.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer.c 

OBJS += \
./Core/Src/Led7Segment.o \
./Core/Src/blink.o \
./Core/Src/fsm_automatic.o \
./Core/Src/fsm_manual.o \
./Core/Src/fsm_setting.o \
./Core/Src/global.o \
./Core/Src/input_processing.o \
./Core/Src/input_reading.o \
./Core/Src/main.o \
./Core/Src/scheduler.o \
./Core/Src/setTrafficLight.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer.o 

C_DEPS += \
./Core/Src/Led7Segment.d \
./Core/Src/blink.d \
./Core/Src/fsm_automatic.d \
./Core/Src/fsm_manual.d \
./Core/Src/fsm_setting.d \
./Core/Src/global.d \
./Core/Src/input_processing.d \
./Core/Src/input_reading.d \
./Core/Src/main.d \
./Core/Src/scheduler.d \
./Core/Src/setTrafficLight.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/Led7Segment.cyclo ./Core/Src/Led7Segment.d ./Core/Src/Led7Segment.o ./Core/Src/Led7Segment.su ./Core/Src/blink.cyclo ./Core/Src/blink.d ./Core/Src/blink.o ./Core/Src/blink.su ./Core/Src/fsm_automatic.cyclo ./Core/Src/fsm_automatic.d ./Core/Src/fsm_automatic.o ./Core/Src/fsm_automatic.su ./Core/Src/fsm_manual.cyclo ./Core/Src/fsm_manual.d ./Core/Src/fsm_manual.o ./Core/Src/fsm_manual.su ./Core/Src/fsm_setting.cyclo ./Core/Src/fsm_setting.d ./Core/Src/fsm_setting.o ./Core/Src/fsm_setting.su ./Core/Src/global.cyclo ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/input_processing.cyclo ./Core/Src/input_processing.d ./Core/Src/input_processing.o ./Core/Src/input_processing.su ./Core/Src/input_reading.cyclo ./Core/Src/input_reading.d ./Core/Src/input_reading.o ./Core/Src/input_reading.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/scheduler.cyclo ./Core/Src/scheduler.d ./Core/Src/scheduler.o ./Core/Src/scheduler.su ./Core/Src/setTrafficLight.cyclo ./Core/Src/setTrafficLight.d ./Core/Src/setTrafficLight.o ./Core/Src/setTrafficLight.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/timer.cyclo ./Core/Src/timer.d ./Core/Src/timer.o ./Core/Src/timer.su

.PHONY: clean-Core-2f-Src
