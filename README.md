# Springtail jumping microrobot
This GitHub repository describes the mechanical and electrical hardware and software for an autonomous spring-tail inspired jumping microrobot. 

# Hardware Specifications
This section details the electrical and mechanical hardware used in the jumping microrobot.

## Electrical hardware
The custom PCB for the jumping microrobot is detailed in [here](https://github.com/RobotFormAndFunction/Springtail_microrobot/tree/main/Electrical%20Hardware), with the schematic of the board and Gerber files. The microcontroller is an ATtiny10 which is a small, low-power 8-bit AVR RISC-based microcontroller with 1 KB ISP Flash memory, 32B SRAM, four general purpose I/O lines. The summary of electrical hardware is below in the BOM. 

<details><summary>Bill of materials (BOM)</summary>

#### BOM

| Component | Value	| Quantity | Package size |
| :--- | --- | :---: | --- |
| Capacitor |	0.1 µF |	2 |	0603 |
| Resistor |	2 kΩ |	1 |	0603 |
| Motor driver |	DRV8835 |	1 |	12-WSON |
| MCU |	ATtiny10 |	1 |	SOT-23-6 |

</details>

## Mechanical hardware
The files required for cutting the spring tail is [here](https://github.com/RobotFormAndFunction/Springtail_microrobot/tree/main/Mechanical%20Hardware). Other mechanical components are listed in the BOM in the mechanical hardware, along with a video of assembly.

# Software specification
The microrobot software was written in Embedded C using PlatformIO and programmed with the Tiny Programming Interface from Atmel using the Atmel-ICE. The source code is available [here](https://github.com/RobotFormAndFunction/Springtail_microrobot/tree/main/Software)
