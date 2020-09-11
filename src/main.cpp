#include <Arduino.h>

int blue_led = 13;
int green_led = 12;
int red_led = 11;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_color(255, 0, 0); // Red
  delay(1000);
  RGB_color(0, 255, 0); // Green
  delay(1000);
  RGB_color(0, 0, 255); // Blue
  delay(1000);
  RGB_color(255, 255, 125); // Raspberry
  delay(1000);
  RGB_color(0, 255, 255); // Cyan
  delay(1000);
  RGB_color(255, 0, 255); // Magenta
  delay(1000);
  RGB_color(255, 255, 0); // Yellow
  delay(1000);
  RGB_color(255, 255, 255); // White
  delay(1000);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_led, red_light_value);
  analogWrite(green_led, green_light_value);
  analogWrite(blue_led, blue_light_value);
 }