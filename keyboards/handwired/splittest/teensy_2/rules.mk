# MCU name
#MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
MCU=STM32
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
#BOOTLOADER = halfkay
DFU_ARGS = -d 0483:df11 -a 0 -s 0x08000000:leave
