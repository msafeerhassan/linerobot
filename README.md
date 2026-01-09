# Line Following Robot with PID
## Project Overview

Line Following Robot with PID project uses IR Sensors, Microcontroller and Motors to follow a line path on the floor. PID is a type of error-reduction algorithm implemented in such robots to reduce their errors and improve accuracy and precision.
## Project Details
This project is built under Hack Club's Blueprint Program. Custom shape PCB will be used as chassis for the car. PCB will also have all components routing alongwith components mounting and soldering. This will reduce the wires and improve the project's appearance. Moreover, it would reduce the weight due to the chassis.
We will use N20 Gear Motors with encoders and DRV8833 Motor Driver alongwith QTR 8 Channel IR Sensor Array and ESP32 S3 Devkit. Several capacitors will be used to improve the current flow. A Lithium Battery will be used as power source. ESP32 will be powered by 5V which will be regulated via a Buck Convertor. Motors will be powered by 6V and this too would be regulated through a 6V 5A Buck Converter.

PCB:

<img width="910" height="728" alt="PCB" src="https://github.com/user-attachments/assets/f200744a-5dd5-4145-8488-7e9e539f4181" />

Schematic Diagram:

<img width="1202" height="813" alt="Schematic Diagram" src="https://github.com/user-attachments/assets/29a61a45-afca-4921-bf6c-146332d10e96" />

3D Model Images:

<img width="513" height="456" alt="3D" src="https://github.com/user-attachments/assets/8aa8c61e-b190-4527-969d-485079c6ecc4" />
<img width="590" height="402" alt="3D Model" src="https://github.com/user-attachments/assets/fbc57b87-fc8e-4ae1-9ace-a69865624479" />
<img width="560" height="442" alt="3D Design" src="https://github.com/user-attachments/assets/ea2dd616-0ad1-4064-a281-0fc197c7fcfc" />




We will use this robot to compete in Line Following Robot competitions.
## How it will work
Firstly, everything will be supplied power by battery and voltage will regulated via Buck Convertors. Then the IR Sensor Array will give readings to the ESP32 and based on that, ESP32 will alter the speed of motors via Motor Driver. This would allow Robot to stay on line. When PID will be implemented, after this step the ESP32 will count error Value and based on that we'll adjust the some variable that will result in increased accuracy and precision. This loop will continue until the robot reaches end of line and then it will stop.
We will try to make a web application where the variables of the PID Algorithm could be altered for better results.
