################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RT-Thread_Kernel/components/finsh/cmd.c \
../RT-Thread_Kernel/components/finsh/msh.c \
../RT-Thread_Kernel/components/finsh/shell.c

OBJS += \
./RT-Thread_Kernel/components/finsh/cmd.o \
./RT-Thread_Kernel/components/finsh/msh.o \
./RT-Thread_Kernel/components/finsh/shell.o

C_DEPS += \
./RT-Thread_Kernel/components/finsh/cmd.d \
./RT-Thread_Kernel/components/finsh/msh.d \
./RT-Thread_Kernel/components/finsh/shell.d


# Each subdirectory must supply rules for building sources it contributes
RT-Thread_Kernel/components/finsh/%.o: ../RT-Thread_Kernel/components/finsh/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 -I.. -I../RT-Thread_Kernel/include -I../RT-Thread_Kernel/board  -I../RT-Thread_Kernel/components/finsh -I../RT-Thread_Kernel/components/drivers/include -O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


