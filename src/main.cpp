#include <Arduino.h>
#include <Servo.h>

Servo cool_servo;
int servo_position = 0;


void setup() {
  
  cool_servo.attach (9);
}

void loop() {
  for (servo_position = 0; servo_position<= 180; servo_position += 1){
    cool_servo.write(servo_position);
    delay(10);
  }
  for (servo_position=180; servo_position>= 0; servo_position -=1){
    cool_servo.write(servo_position);
    delay(10);
  }
}