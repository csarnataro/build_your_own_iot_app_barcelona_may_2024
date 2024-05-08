# JS vs TS

A simple voting machine with two push buttons, ideally one for JavaScript votes 
and one for TypeScript votes (hence the names of the variables declared
in thingProperties.h)

<img src="https://github.com/csarnataro/build_your_own_iot_app_barcelona_may_2024/assets/11388820/be9f47b0-c8f2-44c6-b942-77ef96d16275" alt="A simple voting maching built with an Arduino." width="400">

When either button is pressed, a value is pushed to Arduino Cloud and
a counter is incremented. In addition, 2 percentages are updated.


## Installation

Create a project on the Arduino Cloud.
The Thing you create must have these variables:

```c
float jsPercentage;
float tsPercentage;
int buttonPushCounterJS;
int buttonPushCounterTS;
```

Add the code in this repo to the Sketch you just created online.

## Assemble the circuit

This project uses an Arduino Nano RP2040. See picture.

<img src="https://github.com/csarnataro/build_your_own_iot_app_barcelona_may_2024/assets/11388820/c114f56d-f9c7-4091-a7ad-0c3bee10e829" alt="A breadboard with an Arduino Nano RP2040 on it with some wires, two buttons and a buzzer" width="400">


## Load the code

Upload the code contained in this sketch on to your board


### License
This project is released under a MIT License.

### Contributing
To contribute to this project please open an issue on GitHub

