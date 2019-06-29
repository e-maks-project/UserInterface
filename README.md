# USser Interface board
## Overview
stm32 based board, designed to receive, process and transmit further data from [JL_2000](https://www.farnell.com/datasheets/30691.pdf) joystick. Board will be used in electric bolid, adjusted for disabled people.

## Specifics
Application is desired to aquire data from wheelchair joystic an transmit it further via CAN.
Application written In C using HAL library. Working enviroment is Atolic TrueStudio for STM32 v.9.3.0 
download links:
* [Atolic Studio](https://atollic.com/truestudio/)
* [MxCube](https://www.st.com/en/development-tools/stm32cubemx.html)

Additionally, if you want to see live variables, downlad [stmstudio](https://www.st.com/en/development-tools/stm-studio-stm32.html). 

## Code organization
### Folders
* .metadata - eclpise files
* .settings - eclipse files
* Core - files created by MXCube
* Adc - logic level adc data handling
* Debug - debug data, .elf files are stored her.
* Drivers - CMSIS and board specific HAL drivers
* Startup - stm32 boot file
* Test - unit tests made in ceedling framework
### Files
* User_interface.* - main program source and header file
* .project - keeps eclipse workspace data
* STM32F103RC_FLASH.ld - stm32 linker script 
* User_interface.ioc - MXCube project 
