# Springtail jumping microrobot microrobot
This GitHub repository describes the mechanical and electrical hardware and software for an autonomous spring-tail inspired jumping microrobot. 

# Hardware Specifications
This section details the electrical and mechanical hardware used in the Buffalo Bytes platform.

## Electrical hardware
The custom PCB for the jumping microrobot is detailed in [here](https://github.com/RobotFormAndFunction/Springtail_microrobot/tree/main/ElectricalHardware), with the schematic of the board, Gerber files, and BOM (bill of materials). The microcontroller is an ATtiny10 which is a small, low-power 8-bit AVR RISC-based microcontroller with 1 KB ISP Flash memory, 32B SRAM, four general purpose I/O lines. The summary of electrical hardware is below in the BOM. 

<details><summary>Bill of materials (BOM)</summary>

#### BOM

| Component | Value	| Quantity | Package size |
| :--- | --- | :---: | --- |
| Capacitor |	0.1 µF |	2 |	0603 |
| Resistor |	2 kΩ |	1 |	0603 |
| Motor driver |	DRV8835 |	1 |	12-WSON |
| MCU |	ATtiny10 |	1 |	SOT-23-6 |

</details>