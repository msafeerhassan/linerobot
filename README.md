# Line Following Robot with PID
## Project Overview

Line Following Robot with PID project uses IR Sensors, Microcontroller and Motors to follow a line path on the floor. PID is a type of error-reduction algorithm implemented in such robots to reduce their errors and improve accuracy and precision.
## Project Details
This project is built under Hack Club's Blueprint Program. Custom shape PCB will be used as chassis for the car. PCB will also have all components routing alongwith components mounting and soldering. This will reduce the wires and improve the project's appearance. Moreover, it would reduce the weight due to the chassis.
We will use N20 Gear Motors with encoders and DRV8833 Motor Driver alongwith QTR 8 Channel IR Sensor Array and ESP32 Devkit M1. Several capacitors will be used to improve the current flow. A Lithium Battery will be used as power source and will be linked with BMS for proper charging. ESP32 will be powered by 5V which will be regulated via a Buck Convertor. Motors will be powered by 6V and this too would be regulated through a 6V 5A Buck Converter.
The shape of the PCB will resemble a car:
<img width="678" height="744" alt="Screenshot 2025-12-05 210106" src="https://github.com/user-attachments/assets/12c3bd4b-d899-4db9-aeb2-7ef746a03e05" />

Schematic Diagram:
<img width="1271" height="812" alt="Screenshot 2025-12-15 194827" src="https://github.com/user-attachments/assets/e2ab9e7d-48ed-48bc-bd8f-26806b103728" />

3D Model Images:

<img width="713" height="631" alt="Screenshot 2025-12-17 204329" src="https://github.com/user-attachments/assets/223c6be8-cdf4-41bc-acad-7987d5a13727" />
<img width="1109" height="560" alt="Screenshot 2025-12-17 204302" src="https://github.com/user-attachments/assets/7d4881cd-9611-414c-9e43-3777747db5b9" />
<img width="1134" height="374" alt="Screenshot 2025-12-17 204236" src="https://github.com/user-attachments/assets/85e53959-2f7a-4be2-8508-61f812784cb5" />


We will use this robot to compete in Line Following Robot competitions.
## How it will work
Firstly, everything will be supplied power by battery and voltage will regulated via Buck Convertors. Then the IR Sensor Array will give readings to the ESP32 and based on that, ESP32 will alter the speed of motors via Motor Driver. This would allow Robot to stay on line. When PID will be implemented, after this step the ESP32 will count error Value and based on that we'll adjust the some variable that will result in increased accuracy and precision. This loop will continue until the robot reaches end of line and then it will stop.
We will try to make a web application where the variables of the PID Algorithm could be altered for better results.
