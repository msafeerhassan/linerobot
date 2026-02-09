# Line Following Robot with PID
## Project Overview

Line Following Robot with PID project uses IR Sensors, Microcontroller and Motors to follow a line path on the floor. PID is a type of error-reduction algorithm implemented in such robots to reduce their errors and improve accuracy and precision.
## Project Details
This project is built under Hack Club's Blueprint Program. Custom shape PCB is be used as chassis for the car. PCB covers all components routing alongwith components mounting and soldering. This reduces the wires and improve the project's appearance. Moreover, it reduces the weight due to separate chassis making it more efficient.
N20 Gear Motors with encoders and DRV8833 Motor Driver alongwith QTR 8 Channel IR Sensor Array and ESP32 S3 Devkit are being used. Several capacitors are added to improve the current flow. A Lithium Battery powers this whole project. ESP32 is powered by 5V which is regulated via a Buck Convertor. Motors are powered by 6V and this too is regulated through a 6V 5A Buck Converter.

PCB:

<img width="576" height="654" alt="PCB" src="https://github.com/user-attachments/assets/69708714-528b-48c2-81e9-62f571bdb7c5" />

<img width="914" height="721" alt="PCB 2" src="https://github.com/user-attachments/assets/4e699a70-cb92-492e-9b81-c85a80ed5858" />


Schematic Diagram:

<img width="1198" height="826" alt="Schematic Diagram" src="https://github.com/user-attachments/assets/59c54ac2-6079-4c39-9843-b9b3d057332b" />

3D Model Images:

<img width="866" height="319" alt="3D Model 2" src="https://github.com/user-attachments/assets/3a38d178-7f76-4fcc-8cf4-fad614849962" />

<img width="928" height="600" alt="3D Model 1" src="https://github.com/user-attachments/assets/21abb627-720c-4c21-8a34-c89939d447e0" />





This robot will be used to compete in Line Following Robot competitions like: https://www.dmtsnust.com/nerc/
## How it will work
Firstly, battery powers everything and voltage is regulated via Buck Convertors. Then the IR Sensor Array gives readings to the ESP32 and based on that, ESP32 alters the speed of motors via Motor Driver. This allows Robot to stay on line. When PID is implemented, after this step the ESP32 counts error Value and based on that some manual variables are adjusted that results in increased accuracy and precision. This loop continues until the robot reaches end of line and then it will stop.
