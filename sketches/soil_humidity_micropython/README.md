# Soil humidity sensor in micropython

This is a very simple demo on how to use an **Arduino Nano ESP32** (you can [buy it here](https://store.arduino.cc/products/nano-esp32)) with **Micropython** to 
measure soil humidity (using [this simple sensor](https://www.amazon.it/AZDelivery-Sensori-zubehoerkit-Microcontroller-Hygrometer/dp/B07CNRJN8W))and send data to the Arduino Cloud.

This is a demo showcased in a talk in Barcelona on May 16th 2024. The topic will be around the Arduino Cloud and how to build a desktop IoT app to show custom dashboard
with data coming from the cloud.

https://www.linkedin.com/events/arduinoandthecloud-buildyourown7193544539427495936/about/

## How does it look like

<img src="https://github.com/csarnataro/build_your_own_iot_app_barcelona_may_2024/assets/11388820/296e82b3-fed1-44bf-b649-e2ad4dcd59ed" width="400" alt="An Arduino Nano ESP32 connected to a soil humidity sensor" >

The power wire is connected to pin D3, the analog probe is connected to A0 and, of course, the ground wire is connected to GND (see picture above).

Periodically the sensor measure the humidity and send it to the Arduino Cloud.

## Usage

You can setup your environment following the instructions available 
at https://docs.arduino.cc/micropython/micropython-course/course/introduction-arduino/
and https://docs.arduino.cc/arduino-cloud/guides/micropython/

The basic steps are:
- Install the firmware on your board using the Arduino Micropython installer (see https://labs.arduino.cc/en/labs/micropython-installer)
- Install the Arduino Micropython IDE (see https://labs.arduino.cc/en/labs/micropython) 
- Connect the board to your PC and copy the files in this repo.
- Configure a Thing on the Arduino Cloud console (https://app.arduino.cc), with at least this variable:
  - float humidity;

- Configure your Arduino Nano ESP32 as a "manual device" and download the PDF with the secret key
- Download the code of this repo and open it in the Micropython IDE.
- Add the downloaded secret key in file "secrets.py", along with your WiFi credentials
- Connect the board
- Launch the Micropython script and have fun

 
## Licence
MIT
