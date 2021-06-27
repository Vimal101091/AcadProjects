################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/msp430_gcc/bin/msp430-elf-gcc.exe" -c -mmcu=msp430f5529 -I"C:/ti/ccsv7/ccs_base/msp430/include_gcc" -I"C:/ti/msp430_gcc/msp430-elf/include" -I"E:/TUGraz/ICE/RTBS/Lab/Latest Code/RTBS_BaseProject_New/RTBS_BaseProject_New/libs/RTOS/public/include" -Ofast -g -gdwarf-3 -gstrict-dwarf -Wall -msmall -mhwmult=f5series -mcode-region=none -mdata-region=none -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o"$@" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


