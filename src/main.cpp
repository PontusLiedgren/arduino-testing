#include <Arduino.h>

int blue_led = 13;
int green_led = 12;
int red_led = 11;
int buttonPin = 2;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(blue_led, HIGH);
    delay(1000);
    digitalWrite(green_led, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(red_led, HIGH);
    
  }
}
