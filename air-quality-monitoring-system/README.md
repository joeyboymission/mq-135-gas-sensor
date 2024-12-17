# Arduino Air Quality Monitoring System

## Overview
This project implements an air quality monitoring system using an Arduino UNO, MQ-135 gas sensor, RGB LED, and I2C LCD display. The system monitors air quality and provides visual and audible alerts when gas levels exceed a predefined threshold.

## Hardware Requirements
- Arduino UNO/Nano 
- MQ-135 Gas Sensor
- I2C LCD Display (16x2)
- RGB LED
- Buzzer
- Resistors (as needed)
- Jumper wires
- Breadboard

## Pin Connections
### Sensor and Output Devices
- MQ-135 Sensor: A0
- Buzzer: A2
- Built-in LED: 13
- RGB LED:
  - Red: Pin 6
  - Green: Pin 5
  - Blue: Pin 3

### I2C LCD Display
- SDA: A4
- SCL: A5
- VCC: 5V
- GND: GND

## Features
1. Real-time air quality monitoring
2. LCD display showing:
   - Current status (Normal/Not Normal)
   - Air quality readings in PPM
3. Visual indicators:
   - Green LED: Normal air quality
   - Blinking Red LED: Poor air quality
   - Built-in LED indicator
4. Audible alarm when threshold exceeded
5. Serial monitor output for debugging

## Software Dependencies
- LiquidCrystal_I2C Library
- Arduino IDE

## Configuration
- Default threshold value: 600 PPM
- Sampling interval: 500ms
- LCD Address: 0x27 (16x2 display)

## Operation Modes
1. **Normal Mode**
   - Green LED illuminated
   - LCD displays "Status: Normal"
   - No alarm

2. **Alert Mode**
   - Blinking red LED
   - Continuous morse code beeping
   - LCD displays "Status Not Normal!"
   - Built-in LED activated

## Initial Setup
1. Power on sequence displays:
   - "Air Quality"
   - "Monitoring"
   - Yellow LED indication
2. System then enters monitoring mode

## Serial Monitor Output
- Displays real-time air quality readings
- Status updates (Normal/Not Normal)
- PPM values

## Maintenance
- Calibrate MQ-135 sensor periodically
- Allow 24-48 hour initial burn-in period for sensor
- Keep sensor away from direct airflow

## Troubleshooting
1. If LCD doesn't display:
   - Verify I2C address (default 0x27)
   - Check I2C connections
2. If sensor readings are inconsistent:
   - Check power supply
   - Ensure proper warm-up time
3. If RGB LED doesn't work:
   - Verify pin connections
   - Check LED polarity

## License
This project is open-source and available under the MIT License.

## Author
Joey Boy Mission

## Version
1.0.0


