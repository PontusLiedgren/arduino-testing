#include <Arduino.h>
#include <Servo.h>

Servo cool_servo, cool_servo2;
int servo_position = 0;


void setup() {
  
  cool_servo.attach (9);
  cool_servo2.attach (10);
}

void loop() {
  for (servo_position = 0; servo_position<= 180; servo_position += 1){
    cool_servo.write(servo_position);
    cool_servo2.write(servo_position);
    delay(15);
  }
  for (servo_position=180; servo_position>= 0; servo_position -=1){
    cool_servo.write(servo_position);
    cool_servo2.write(servo_position);
    delay(15);
  }
}