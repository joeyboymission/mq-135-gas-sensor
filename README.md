# MQ-135 Gas Sensor

**Author**: Joey Boy Mission (JOIBOI)  
Computer Engineering Technologist

## Description

These are the compiled projects including the source code and the schematic diagram of each system. Each project is designed to utilize the MQ-135 gas sensor for various applications, providing detailed insights and real-time monitoring of air quality.

### What is MQ-135 gas sensor?

The MQ-135 is a gas sensor that belongs to the MQ series, which is used to detect various gases in the air. It can sense gases like ammonia (NH3), nitrogen oxides (NOx), alcohol, benzene, smoke, and carbon dioxide (CO2). The sensor works by ionizing the gases that come into contact with its sensing element, which changes the resistance of the element and alters the output current. This change in current is then measured to determine the concentration of the gases.

### Gas Sensor Overview

The MQ-135 gas sensor module is designed to detect a variety of gases in the air, including ammonia (NH3), nitrogen oxides (NOx), alcohol, benzene, smoke, and carbon dioxide (CO2). Here's a brief overview of its features and specifications:

**Features**

- Wide Detecting Scope: Can detect multiple gases.
- Fast Response and High Sensitivity: Quickly responds to changes in gas concentration.
- Stable and Long Life: Durable and reliable for long-term use.
- Analog and Digital Outputs: Provides both types of outputs for flexibility in applications.

**Specifications**

The table below shows some key specifications of the MQ-135 sensor module:

| Feature                | Description                        |
|------------------------|------------------------------------|
| Operating Voltage      | 2.5-5.0V                           |
| Detecting Concentration| 10ppm-300ppm for NH3               |
|                        | 10ppm-1000ppm for Benzene          |
|                        | 10ppm-300ppm for Alcohol           |
| Load Resistance        | Adjustable                         |
| Heater Resistance      | 33Ω ± 5%                           |
| Heater Consumption     | less than 800mW                    |
| Operating Temperature  | -10 to 45°C                        |

**Pin Configuration**

- VCC: Positive power supply pin.
- GND: Ground pin.
- AO: Analog output pin, provides a voltage proportional to the gas concentration.
- DO: Digital output pin, provides a digital signal when gas concentration exceeds a threshold set by the onboard potentiometer.

### Working Principle

The sensor works by ionizing the gases that come into contact with its sensing element, which changes the resistance of the element and alters the output current. This change in current is then measured to determine the concentration of the gases. The analog output voltage ranges from 0-5V, and the digital output can be set to trigger at a specific gas concentration using the onboard potentiometer.

## Currently Active Projects:

- **Air Quality Monitoring System**
    - A system that continuously monitors the air quality and provides real-time data on various gas levels. It includes features such as data logging, alert notifications, and integration with other smart devices for enhanced functionality.

## Upcoming Projects:

- **Smart Home Purifier**
    - A system that purifies the air in your home by detecting harmful gases and activating air purifiers automatically. It aims to improve indoor air quality and ensure a healthier living environment.
- **Gas Leak Detector**
    - A device that detects gas leaks in your home or workplace and sends alerts to prevent potential hazards. It is designed to enhance safety by providing early warnings of dangerous gas levels.
- **Environmental Data Logger**
    - A project that logs environmental data such as gas levels, temperature, and humidity for analysis and monitoring. This system helps in understanding long-term trends and making informed decisions based on the collected data.
- **Indoor Air Quality Index (IAQI)**
    - A system that measures and displays the air quality index inside your home or office to ensure a healthy environment. It provides a clear and easy-to-understand representation of air quality, helping users take necessary actions to improve it.
- **Automated Ventilation System**
    - A system that automatically controls ventilation based on the detected air quality to maintain optimal indoor conditions. It ensures that the air remains fresh and clean by adjusting ventilation rates as needed.
- **Wearable Air Quality Monitor**
    - A portable device that monitors the air quality around you and provides real-time feedback to ensure your safety. It is designed for personal use, allowing individuals to stay informed about the air quality in their immediate surroundings.
