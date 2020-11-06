#include <Arduino.h>
#include <Servo.h>

// Servo cool_servo, cool_servo2;
// int servo_position = 0;


// void setup() {
  
//   cool_servo.attach (9);
//   cool_servo2.attach (10);
// }

// void loop() {
//   for (servo_position = 0; servo_position<= 180; servo_position += 1){
//     cool_servo.write(servo_position);
//     cool_servo2.write(servo_position);
//     delay(15);
//   }
//   for (servo_position=180; servo_position>= 0; servo_position -=1){
//     cool_servo.write(servo_position);
//     cool_servo2.write(servo_position);
//     delay(15);
//   }
// }

#define JOYS_VRX_DIO A0    /* Selects the input pin for the joysticks X-Axis */
#define JOYS_VRY_DIO A1    /* Selects the input pin for the joysticks Y-Axis */

#define JOYS_SW_DIO 11      /* Selects the input pin for the joysticks push button */

#define ServoPinX 4 /* Selects the input pin for servo X direction steering. */
#define ServoPinY 2 /* Selects the input pin for servo Y direction steering. */


// Initialises serial and DIO */

void setup() {  
  /* Sets up the serial port for displaying the status of the sensor */
  Serial.begin(9600);
 
  /* Configures the DIO pin that the joysticks push button will be connected
     to. As it has no pull-up we will need to enable the Arduino's internal pull-up */
  pinMode(ServoPinX, OUTPUT);
  pinMode(JOYS_SW_DIO, INPUT);
  digitalWrite(JOYS_SW_DIO, HIGH); // turns on pull-up resistors
}


// Main program loop */
void loop()
{
  /* Reads the current position of the joysticks X & Y axis via the analogue pins */
  Serial.print("X axis: ");
  Serial.print(analogRead(JOYS_VRX_DIO));
  Serial.print("  Y axis: ");
  Serial.print(analogRead(JOYS_VRY_DIO));
 
  /* Reads the state of the push button and if pressed, outputs the state to the
     serial port */
  if (!digitalRead(JOYS_SW_DIO))
  {
    Serial.println("  Button pressed !");
  }else
  {
     Serial.println();
  }

  if (!analogRead(JOYS_VRX_DIO)) 
  { digitalWrite(ServoPinX, HIGH);
    delayMicroseconds(1450); // Duration of the pusle in microseconds
    digitalWrite(ServoPinX, LOW);
    delayMicroseconds(18550); }
}