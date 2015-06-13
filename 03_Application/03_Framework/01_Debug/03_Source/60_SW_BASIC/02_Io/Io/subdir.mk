################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../03_Source/60_SW_BASIC/02_Io/Io/Io.cpp \
../03_Source/60_SW_BASIC/02_Io/Io/Io_Cfg.cpp 

OBJS += \
./03_Source/60_SW_BASIC/02_Io/Io/Io.o \
./03_Source/60_SW_BASIC/02_Io/Io/Io_Cfg.o 

CPP_DEPS += \
./03_Source/60_SW_BASIC/02_Io/Io/Io.d \
./03_Source/60_SW_BASIC/02_Io/Io/Io_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
03_Source/60_SW_BASIC/02_Io/Io/%.o: ../03_Source/60_SW_BASIC/02_Io/Io/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\50_LLD\03_PortPin" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\02_Io\IoPinAbs" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\02_Io\IoPortAbs" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\02_Io" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\02_Io\Io" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\20_SYSTEM" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\20_SYSTEM\01_Os" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\50_LLD" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\50_LLD\01_Port" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\50_LLD\02_Timer" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\50_LLD\02_Timer\01_HwTimer" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\01_Register" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\01_Register\Register" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\01_Register\Register16Bit" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\60_SW_BASIC\01_Register\Register8Bit" -I"D:\Programmierung\Framework\03_Application\03_Framework\03_Source\70_COMMON" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega324pa -DF_CPU=20000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


