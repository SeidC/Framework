################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 03_Source/60_SW_BASIC/02_Io/IoPortAbs/subdir.mk
-include 03_Source/60_SW_BASIC/02_Io/IoPinAbs/subdir.mk
-include 03_Source/60_SW_BASIC/02_Io/Io/subdir.mk
-include 03_Source/60_SW_BASIC/01_Register/Register8Bit/subdir.mk
-include 03_Source/60_SW_BASIC/01_Register/Register16Bit/subdir.mk
-include 03_Source/60_SW_BASIC/01_Register/Register/subdir.mk
-include 03_Source/50_LLD/03_PortPin/subdir.mk
-include 03_Source/50_LLD/02_Timer/01_HwTimer/subdir.mk
-include 03_Source/50_LLD/02_Timer/subdir.mk
-include 03_Source/50_LLD/01_Port/subdir.mk
-include 03_Source/20_SYSTEM/01_Os/subdir.mk
-include 03_Source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
03_Framework.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: 03_Framework.elf secondary-outputs

# Tool invocations
03_Framework.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C++ Linker'
	avr-g++ -Wl,-Map,03_Framework.map,--cref -mrelax -Wl,--gc-sections -mmcu=atmega324pa -o "03_Framework.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

03_Framework.lss: 03_Framework.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 03_Framework.elf  >"03_Framework.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 03_Framework.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega324pa 03_Framework.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ELFS)$(LSS)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(CPP_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) 03_Framework.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
