Description:
This is a simple I2C scanner for Arduino that detects and prints the addresses of connected I2C devices. It continuously scans the I2C bus and reports any detected device addresses in hexadecimal format (0xXX).

Features:
Scans I2C addresses from 0x01 to 0x7F
Displays detected I2C device addresses
Prints the total number of detected devices
Runs a new scan every 5 seconds
Uses Wire.h for I2C communication
Usage:
Connect an Arduino board (e.g., Uno, Mega, or Nano).
Wire your I2C devices to the correct SDA and SCL pins.
Upload the sketch to your Arduino.
Open the Serial Monitor (115200 baud rate) to see the detected I2C addresses.
This tool is useful for debugging (you dont debug on Uno)I2C connections and verifying that devices are properly connected. 

---for defeault(Arduino Uno)---
-VCC to 5V or 3.3V
-GND to GND
-SCL to A5
-SDA to A4
