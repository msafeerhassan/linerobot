# Line Following Robot with PID
## Project Overview

Line Following Robot with PID project uses IR Sensors, Microcontroller and Motors to follow a line path on the floor. PID is a type of error-reduction algorithm implemented in such robots to reduce their errors and improve accuracy and precision.
## Project Details
This project is built under Hack Club's Blueprint Program. Custom shape PCB is be used as chassis for the car. PCB covers all components routing alongwith components mounting and soldering. This reduces the wires and improve the project's appearance. Moreover, it reduces the weight due to separate chassis making it more efficient.
N20 Gear Motors with encoders and DRV8833 Motor Driver alongwith QTR 8 Channel IR Sensor Array and ESP32 S3 Devkit are being used. Several capacitors are added to improve the current flow. A Lithium Battery powers this whole project. ESP32 is powered by 5V which is regulated via a Buck Convertor. Motors are powered by 6V and this too is regulated through a 6V 5A Buck Converter.

PCB:

<img width="910" height="728" alt="PCB" src="https://github.com/user-attachments/assets/f200744a-5dd5-4145-8488-7e9e539f4181" />

Schematic Diagram:

<img width="1202" height="813" alt="Schematic Diagram" src="https://github.com/user-attachments/assets/29a61a45-afca-4921-bf6c-146332d10e96" />

3D Model Images:

<img width="513" height="456" alt="3D" src="https://github.com/user-attachments/assets/8aa8c61e-b190-4527-969d-485079c6ecc4" />
<img width="590" height="402" alt="3D Model" src="https://github.com/user-attachments/assets/fbc57b87-fc8e-4ae1-9ace-a69865624479" />
<img width="560" height="442" alt="3D Design" src="https://github.com/user-attachments/assets/ea2dd616-0ad1-4064-a281-0fc197c7fcfc" />




This robot will be used to compete in Line Following Robot competitions like: 
## How it will work
Firstly, battery powers everything and voltage is regulated via Buck Convertors. Then the IR Sensor Array gives readings to the ESP32 and based on that, ESP32 alters the speed of motors via Motor Driver. This allows Robot to stay on line. When PID is implemented, after this step the ESP32 counts error Value and based on that some manual variables are adjusted that results in increased accuracy and precision. This loop continues until the robot reaches end of line and then it will stop.
