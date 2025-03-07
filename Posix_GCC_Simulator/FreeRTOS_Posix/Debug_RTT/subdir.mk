################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += $(wildcard ../study_demo/${APP_NAME}/*.c)

OBJS += $(patsubst %.c, ./study_demo/%.o, $(notdir ${C_SRCS}))

C_DEPS += $(patsubst %.c, ./study_demo/%.d, $(notdir ${C_SRCS}))

# Each subdirectory must supply rules for building sources it contributes
./study_demo/%.o: ../study_demo/${APP_NAME}/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 \
	-I.. \
	-I../RT-Thread_Kernel/include \
	-I../RT-Thread_Kernel/board \
	-I../RT-Thread_Kernel/components/finsh \
	-I../RT-Thread_Kernel/components/drivers/include \
	-O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -T gcc.ld -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


