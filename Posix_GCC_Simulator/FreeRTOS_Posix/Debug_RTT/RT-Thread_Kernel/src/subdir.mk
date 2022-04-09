################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RT-Thread_Kernel/src/clock.c \
../RT-Thread_Kernel/src/cpu.c \
../RT-Thread_Kernel/src/idle.c \
../RT-Thread_Kernel/src/ipc.c \
../RT-Thread_Kernel/src/irq.c \
../RT-Thread_Kernel/src/kservice.c \
../RT-Thread_Kernel/src/mem.c \
../RT-Thread_Kernel/src/object.c \
../RT-Thread_Kernel/src/scheduler.c \
../RT-Thread_Kernel/src/signal.c \
../RT-Thread_Kernel/src/thread.c \
../RT-Thread_Kernel/src/device.c \
../RT-Thread_Kernel/src/timer.c


OBJS += \
./RT-Thread_Kernel/src/clock.o \
./RT-Thread_Kernel/src/cpu.o \
./RT-Thread_Kernel/src/idle.o \
./RT-Thread_Kernel/src/ipc.o \
./RT-Thread_Kernel/src/irq.o \
./RT-Thread_Kernel/src/kservice.o \
./RT-Thread_Kernel/src/mem.o \
./RT-Thread_Kernel/src/object.o \
./RT-Thread_Kernel/src/scheduler.o \
./RT-Thread_Kernel/src/signal.o \
./RT-Thread_Kernel/src/thread.o \
./RT-Thread_Kernel/src/device.o \
./RT-Thread_Kernel/src/timer.o


C_DEPS += \
./RT-Thread_Kernel/src/clock.d \
./RT-Thread_Kernel/src/cpu.d \
./RT-Thread_Kernel/src/idle.d \
./RT-Thread_Kernel/src/ipc.d \
./RT-Thread_Kernel/src/irq.d \
./RT-Thread_Kernel/src/kservice.d \
./RT-Thread_Kernel/src/mem.d \
./RT-Thread_Kernel/src/object.d \
./RT-Thread_Kernel/src/scheduler.d \
./RT-Thread_Kernel/src/signal.d \
./RT-Thread_Kernel/src/thread.d \
./RT-Thread_Kernel/src/device.d \
./RT-Thread_Kernel/src/timer.d

# Each subdirectory must supply rules for building sources it contributes
RT-Thread_Kernel/%.o: ../RT-Thread_Kernel/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 -I.. -I../RT-Thread_Kernel/include -I../RT-Thread_Kernel/board  -I../RT-Thread_Kernel/components/finsh -I../RT-Thread_Kernel/components/drivers/include -O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


