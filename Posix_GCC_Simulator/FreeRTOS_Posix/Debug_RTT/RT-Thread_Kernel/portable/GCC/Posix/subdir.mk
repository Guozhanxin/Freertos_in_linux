################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RT-Thread_Kernel/portable/GCC/Posix/port.c 

OBJS += \
./RT-Thread_Kernel/portable/GCC/Posix/port.o 

C_DEPS += \
./RT-Thread_Kernel/portable/GCC/Posix/port.d 


# Each subdirectory must supply rules for building sources it contributes
RT-Thread_Kernel/portable/GCC/Posix/%.o: ../RT-Thread_Kernel/portable/GCC/Posix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 -I../Common_Demo/include -I.. -I../RT-Thread_Kernel/include -I../RT-Thread_Kernel/portable/GCC/Posix -O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


