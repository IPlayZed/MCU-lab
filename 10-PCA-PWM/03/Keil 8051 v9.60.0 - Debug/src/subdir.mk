################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
A51_UPPER_SRCS += \
../src/SILABS_STARTUP.A51 

C_SRCS += \
../src/03_main.c \
../src/InitDevice.c \
../src/Interrupts.c 

OBJS += \
./src/03_main.OBJ \
./src/InitDevice.OBJ \
./src/Interrupts.OBJ \
./src/SILABS_STARTUP.OBJ 


# Each subdirectory must supply rules for building sources it contributes
src/%.OBJ: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	wine "/opt/simplicitystudio5/developer/toolchains/keil_8051/9.60/BIN/C51" "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/03_main.OBJ: /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h /home/minef/git_clones/MCU-lab/10-PWM/03/inc/InitDevice.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/si_toolchain.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdint.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdbool.h

src/InitDevice.OBJ: /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h /home/minef/git_clones/MCU-lab/10-PWM/03/inc/InitDevice.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/si_toolchain.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdint.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdbool.h

src/Interrupts.OBJ: /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/si_toolchain.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdint.h /opt/simplicitystudio5/developer/sdks/8051/v4.2.2/Device/shared/si8051Base/stdbool.h

src/%.OBJ: ../src/%.A51
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Assembler'
	wine "/opt/simplicitystudio5/developer/toolchains/keil_8051/9.60/BIN/AX51" "@$(patsubst %.OBJ,%.__ia,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '


