# Springtail jumping microrobot
This GitHub repository describes the mechanical and electrical hardware and software for an autonomous spring-tail inspired jumping microrobot. 

To cite:
```bibtex
@INPROCEEDINGS{Singh2024,
  author={Singh, Shashwat and Temel, Zeynep and St.~Pierre, Ryan},
  booktitle={2024 IEEE International Conference on Robotics and Automation (ICRA)}, 
  title={Multi-modal jumping and crawling in an autonomous, springtail-inspired microrobot}, 
  year={2024},
  volume={},
  number={},
  pages={5999-6005},
  doi={10.1109/ICRA57147.2024.10610130}}
```



https://github.com/RobotFormAndFunction/Springtail_microrobot/assets/98366383/b097e502-10c7-4643-9109-868a8b8baddd



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
