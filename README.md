# Line Following Robot with PID
## Project Overview

Line Following Robot with PID project uses IR Sensors, Microcontroller and Motors to follow a line path on the floor. PID is a type of error-reduction algorithm implemented in such robots to reduce their errors and improve accuracy and precision.
## Project Details
This project is built under Hack Club's Blueprint Program. Custom shape PCB is be used as chassis for the car. PCB covers all components routing alongwith components mounting and soldering. This reduces the wires and improve the project's appearance. Moreover, it reduces the weight due to separate chassis making it more efficient.
N20 Gear Motors with encoders and DRV8833 Motor Driver alongwith QTR 8 Channel IR Sensor Array and ESP32 S3 Devkit are being used. Several capacitors are added to improve the current flow. A Lithium Battery powers this whole project. ESP32 is powered by 5V which is regulated via a Buck Convertor. Motors are powered by 6V and this too is regulated through a 6V 5A Buck Converter.

### PCB:

<img width="804" height="880" alt="Screenshot 2026-02-15 094448" src="https://github.com/user-attachments/assets/cb4cef1f-d56f-4c06-b75d-897ad68bd938" />

<img width="670" height="796" alt="Screenshot 2026-02-15 094438" src="https://github.com/user-attachments/assets/fc59dfc4-9bfc-42b4-b866-d7fe2696acf7" />

### Schematic Diagram:

<img width="1166" height="826" alt="Screenshot 2026-02-15 094424" src="https://github.com/user-attachments/assets/a09ffa32-af0f-4915-aea2-31d72f811282" />

### 3D Model Images:

<img width="683" height="248" alt="Screenshot 2026-02-15 093258" src="https://github.com/user-attachments/assets/9aed1a0b-a342-4a33-9b99-e2ae4e15e3d3" />

<img width="626" height="549" alt="Screenshot 2026-02-15 093231" src="https://github.com/user-attachments/assets/1aed25fb-86be-49ee-b4e0-595a6902c897" />


### Why I made this project?

This was my first ever Hardware Project involving Schematic Design and PCB. I chose this project to strengthen my knowledge and skills of using sensors, microcontrollers etc. I learnt a lot about capacitance, optimum current flow and how sensors work inside. This robot will be used to compete in Line Following Robot competitions like: https://www.dmtsnust.com/nerc/. This project, though difficult but still made me believe that I can build efficient and great Hardware Projects too.

### How it will work
Firstly, battery powers everything and voltage is regulated via Buck Convertors. 
Then the IR Sensor Array gives readings to the ESP32 and based on that, ESP32 alters the speed of motors via Motor Driver.
This allows Robot to stay on line.
When PID is implemented, after this step the ESP32 counts error Value and based on that some manual variables are adjusted that results in increased accuracy and precision.
This loop continues until the robot reaches end of line and then it will stop.

### How to use it?

Firstly, order the PCB from PCB Manufacturing Service. I used JLCPCB: http://jlcpcb.com/ because they offer great and high quality services.
Then order all the components listed in the Bill of Materials.
Solder them all onto the PCB and fully assemble it.
Flash the firmware inside the ESP32. Make sure to adjust variables for better results.
BOOM!!! YOU MADE A COOL LINE FOLLOWING ROBOT.

## Bill of Materials (BOM)

| Item Name                                                   | Quantity | Link                                                                                                                              | Cost   |
|:------------------------------------------------------------|---------:|:----------------------------------------------------------------------------------------------------------------------------------|:-------|
| ESP32-DevKit-S3-WROOM1                                      |        1 | [Link](https://epro.pk/product/pre-soldered-esp32-s3-wroom-1-development-board-2-4g-wifi-bt-module/)                              | $6.41  |
| DRV8833 Motor Driver                                        |        1 | [Link](https://epro.pk/product/tb6612-drv8833-dual-motor-driver-module-1a-h-bridge-for-arduino-robotics/)                         | $1.98  |
| 6V N20 Gear Motor with encoder, wheel and mounting brackets |        2 | [Link](https://www.aliexpress.com/item/1005004110888400.html)                                                                     | $16.35 |
| 5A Buck DC-DC Converter 7.4V to 6V                          |        1 | [Link](https://www.aliexpress.com/item/4000496873234.html)                                                                        | $4.84  |
| 7.4V to 5V 1A DC-DC Fixed Buck Convertor (for ESP32)        |        1 | [Link](https://www.aliexpress.com/item/1005006005553178.html)                                                                     | $1.86  |
| 470 µF, 16 V aluminium electrolytic capacitor               |        2 | [Link](https://epro.pk/product/470uf-16v-aluminum-electrolytic-capacitor/)                                                        | $0.11  |
| 220 µF, 10 V aluminium electrolytic capacitor               |        1 | We'll buy it ourself                                                                                                              | $0.00  |
| 100 nF Ceramic Capacitor                                    |        2 | [Link](https://epro.pk/product/0-1uf-100nf-100000pf-104-ceramic-capacitor-in-pakistan/)                                           | $0.02  |
| 8 Channel IR Sensor Array                                   |        1 | [Link](https://epro.pk/product/qtr-8rc-line-following-reflectance-ir-sensor-8-channel-line-following-line-tracking-array-module/) | $2.30  |
| LiPo Battery 7.4V 1500mAH                                   |        1 | [Link](https://epro.pk/product/zop-power-7-4v-1500mah-li-po-rechargeable-battery-pack/)                                           | $10.04 |
| PCB                                                         |        1 | No Link:(                                                                                                                         | $36.25 |
| Push Switch Button                                          |        1 | [Link](https://epro.pk/product/slider-on-off-switch/)                                                                             | $0.05  |
| TAXES:(                                                     |        0 | No Link:(                                                                                                                         | $16.14 |
| Total Cost                                                  |        0 |                                                                                                                                   | $96.35 |
