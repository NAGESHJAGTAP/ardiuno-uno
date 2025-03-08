# 🚗 Car Wiper System - Arduino Uno Project

## 📌 Project Overview
This project implements an **automatic car wiper system** using an **Arduino Uno**. The system detects water using a **water sensor** and automatically controls **servo motors** to simulate the movement of car wipers. The wipers activate when the water level surpasses a set threshold, ensuring a clear windshield.

## 🛠 Components Required
- 🟢 **Arduino Uno**
- 💧 **Water Sensor**
- 🔧 **Servo Motors (2x)**
- 🔌 **Connecting Wires**
- 🔋 **Power Supply**

## 🔍 Working Principle
1. **Water Detection**: The water sensor continuously measures water presence.
2. **Threshold Check**: If the sensor detects water above the **WATER_THRESHOLD** (300), the wipers activate.
3. **Servo Motor Control**: Two servos move back and forth, mimicking wiper motion.
4. **Idle Mode**: If no water is detected, the wipers remain at their default position.

## 💻 Code Explanation
The code follows a simple logic to control the wipers:

1. **Define Pins & Constants:**
   - `WATER_SENSOR_PIN`: Represents the input pin for the water sensor.
   - `SERVO_PIN1 & SERVO_PIN2`: Control the wipers.
   - `ANGLE_START & ANGLE_END`: Define the wiper motion range (0° - 160°).
   - `WATER_THRESHOLD`: Determines when the wipers should activate.

2. **Wiper Movement Function (`wipeWipers`)**:
   - Moves **Servo 1** from `0°` to `160°` and back.
   - Moves **Servo 2** in the same manner.
   - Introduces delays using `usleep(10000);` to simulate real wiper movement.

3. **Main Loop (`while(1)`)**:
   - Reads the water sensor value.
   - If the water level **exceeds 300**, calls `wipeWipers()`.
   - Otherwise, keeps the wipers at `0°`.
   - Repeats every `500ms` (`usleep(500000);`).

## 🔄 Code Execution Flow
1. **Start the Arduino**.
2. **Continuously monitor** the water sensor.
3. **If water is detected**, move the wipers back and forth.
4. **If no water is detected**, wipers stay in their default position.

## 🛠 Future Enhancements
- 🟠 **Use a real servo control library (like `Servo.h`)** for better precision.
- 🔵 **Adjustable Threshold** based on rain intensity.
- 🟢 **OLED Display** to show sensor readings.
- 🔴 **Automatic Speed Control** based on water intensity.

## 🎯 Conclusion
This project is a **basic simulation** of a car wiper system controlled by **water detection**. It demonstrates **sensor integration, servo motor control, and automation** using an Arduino Uno. 🚗💨
