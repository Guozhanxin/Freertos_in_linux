################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RT-Thread_Kernel/croutine.c \
../RT-Thread_Kernel/list.c \
../RT-Thread_Kernel/queue.c \
../RT-Thread_Kernel/tasks.c \
../RT-Thread_Kernel/event_groups.c \
../RT-Thread_Kernel/stream_buffer.c \
../RT-Thread_Kernel/timers.c

OBJS += \
./RT-Thread_Kernel/croutine.o \
./RT-Thread_Kernel/list.o \
./RT-Thread_Kernel/queue.o \
./RT-Thread_Kernel/tasks.o \
./RT-Thread_Kernel/event_groups.o \
./RT-Thread_Kernel/stream_buffer.o \
./RT-Thread_Kernel/timers.o

C_DEPS += \
./RT-Thread_Kernel/croutine.d \
./RT-Thread_Kernel/list.d \
./RT-Thread_Kernel/queue.d \
./RT-Thread_Kernel/tasks.d \
./RT-Thread_Kernel/event_groups.d \
./RT-Thread_Kernel/stream_buffer.d \
./RT-Thread_Kernel/timers.d


# Each subdirectory must supply rules for building sources it contributes
RT-Thread_Kernel/%.o: ../RT-Thread_Kernel/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 -I../Common_Demo/include -I.. -I../RT-Thread_Kernel/include -I../RT-Thread_Kernel/portable/GCC/Posix -O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


