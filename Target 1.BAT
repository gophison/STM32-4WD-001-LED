SET PATH=C:\Keil\ARM\BIN40\;C:\windows\system32;C:\windows;C:\windows\System32\Wbem;C:\windows\System32\WindowsPowerShell\v1.0\;D:\shumeipai
SET ARMCC41INC=C:\Keil\ARM\RV31\INC
SET ARMCC41LIB=C:\Keil\ARM\RV31\LIB
SET CPU_TYPE=STM32F103C8
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=Target 1
SET CPU_CLOCK=0x00000000
"C:\Keil\ARM\BIN40\ArmAsm" --Via ".\output\startup_stm32f10x_md._ia"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\core_cm3.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\system_stm32f10x.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\delay.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\sys.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\usart.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\main.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\app_motor.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp_gpio.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp_motor.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp_servo.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp_timer.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\bsp_colorful.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\misc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_adc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_bkp.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_can.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_cec.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_crc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_dac.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_dbgmcu.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_dma.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_exti.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_flash.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_fsmc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_gpio.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_i2c.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_iwdg.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_pwr.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_rcc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_rtc.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_sdio.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_spi.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_tim.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_usart.__i"
"C:\Keil\ARM\BIN40\ArmCC" --Via ".\output\stm32f10x_wwdg.__i"
"C:\Keil\ARM\BIN40\ArmLink" --Via ".\output\Color_LED.lnp"
C:\Keil\ARM\BIN40\fromelf.exe ".\output\Color_LED.axf" --i32combined --output ".\output\Color_LED.hex"
