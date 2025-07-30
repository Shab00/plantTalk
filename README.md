# PlantTalk

A simple Arduino project that monitors soil moisture and alerts you when your plant needs water.  
When the soil is dry, the LED flashes and a message is sent to the serial monitor.

## How it works

- Uses a soil moisture sensor to detect dryness.
- Flashes a red LED and sends a "Feed Me!" message when the plant needs water.

## Usage

1. Connect the soil moisture sensor to your Arduino.
2. Connect a red LED to pin 13.
3. Upload the sketch (`plantTalk.ino`) using Arduino CLI:
   ```
   arduino-cli compile --fqbn arduino:avr:uno .
   arduino-cli upload -p <YOUR_PORT> --fqbn arduino:avr:uno .
   ```
4. Open the serial monitor to see alerts.

## Requirements

- Arduino Uno (or compatible)
- Soil moisture sensor
- Red LED
- Arduino CLI
