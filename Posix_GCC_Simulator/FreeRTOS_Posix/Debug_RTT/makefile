################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include RT-Thread_Kernel/src/subdir.mk
-include RT-Thread_Kernel/libcpu/sim/posix/subdir.mk
-include RT-Thread_Kernel/board/subdir.mk
-include RT-Thread_Kernel/components/finsh/subdir.mk
-include RT-Thread_Kernel/components/drivers/ipc/subdir.mk
-include RT-Thread_Kernel/components/drivers/serial/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: FreeRTOS_Posix

# Tool invocations
FreeRTOS_Posix: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -pthread -lrt -T gcc.ld -o"FreeRTOS_Posix" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) FreeRTOS_Posix
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
