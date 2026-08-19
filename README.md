# 4-Servo-Motors

## Project Description

This project uses an Arduino Uno and four servo motors. The goal is to program all four servo motors to perform a continuous Sweep motion for **2 seconds**. After 2 seconds, all four servo motors move to **90 degrees** and hold their position.

## Objective

The system performs the following actions in order:

1. Start all four servo motors at **0 degrees**.
2. Make all four servo motors sweep from **0° to 180° and back to 0°**.
3. Continue the Sweep motion for **2 seconds**.
4. After 2 seconds, move all four servo motors to **90 degrees**.
5. Keep all four motors fixed at **90 degrees**.

## Components

* Arduino Uno
* 4 × Servo Motors
* Jumper Wires
* Tinkercad Circuits

## Circuit Connections

| Servo Motor | Signal Pin    | VCC | GND |
| ----------- | ------------- | --- | --- |
| Servo 1     | Digital Pin 3 | 5V  | GND |
| Servo 2     | Digital Pin 5 | 5V  | GND |
| Servo 3     | Digital Pin 6 | 5V  | GND |
| Servo 4     | Digital Pin 9 | 5V  | GND |

All servo motors share the Arduino **5V** and **GND** connections.

## How the Program Works

The program uses the Arduino `Servo.h` library to control the four servo motors.

At the beginning, all motors are positioned at **0 degrees**.

The program then starts the Sweep motion. The angle increases from **0° to 180°**, then decreases back to **0°**. This movement continues for exactly **2 seconds**.

After the 2-second period is completed, the program sets the angle of all four servo motors to **90 degrees**. The motors then remain at 90 degrees without performing any additional movement.

## Expected Result

When the simulation starts:

**0° → 180° → 0° → 180° → ...**

The Sweep motion continues for **2 seconds**.

Then:

**Servo 1 → 90°**
**Servo 2 → 90°**
**Servo 3 → 90°**
**Servo 4 → 90°**

All four servo motors remain fixed at **90 degrees**.

## Simulation

The project was implemented and tested using **Tinkercad Circuits**.

A video of the simulation is included as part of the submission to demonstrate the required movement.

## Files Included

* `servo_sweep.ino` – Arduino source code.
* `README.md` – Project description and documentation.
* `Video` – Demonstration of the simulation.

## Conclusion

The project successfully controls four servo motors to perform the required Sweep motion for **2 seconds** and then positions all four motors at **90 degrees**, where they remain fixed.

## Video Demonstration

https://github.com/user-attachments/assets/61cd935a-05bc-4ee9-b92c-3f67f4eefd96

