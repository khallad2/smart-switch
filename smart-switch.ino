#include <Servo_ESP32.h>

static const int servoPin = 14; //printed G14 on the board

Servo_ESP32 servo1;

int angle =0;
int angleStep = 5;

int angleMin =0;
int angleMax = 180;

void setup() {
    Serial.begin(9600);
    myServo.attach(servoPin); // Attach the servo to the specified pin
    myServo.write(0); 
}

void loop() {
    if (Serial.available() > 0) {
    int paramValue = Serial.parseInt(); // Read the parameter value from Serial Monitor
    
    if (paramValue == 0) {
      myServo.write(0); // Move the servo to angle 0 degrees
    } else if (paramValue == 1) {
      myServo.write(180); // Move the servo to angle 180 degrees
    }
  }
}
