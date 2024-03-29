/*  PRIZM Controller example program
 *  This program sets the speed of servo 1 to 25%.
 *  Servo 1 is then rotated back and forth between 0 and 180 degree range.
 *  author PWU on 08/05/2016
*/

#include <PRIZM.h>    // include the PRIZM library in the sketch
#include <TELEOP.h>   // TETRIX TeleOp module Library

PRIZM prizm;          // Create an instance within the PRIZM Library class named prizm
PS4 ps4;              // Create an instance within the PS4 Library class named ps4

int PowerM1;          // Channel 1 Motor Power 
int PowerM2;          // Channel 2 Motor Power

void setup() {

  prizm.PrizmBegin();         // initialize the PRIZM controller
  prizm.setServoSpeed(2,40);  // set servo 1 speed to 25%
  prizm.setServoSpeed(2,100);
  prizm.PrizmBegin();     // initialize PRIZM
  ps4.setDeadZone (LEFT,10);     // Sets a Left Joystick Dead Zone axis range of +/- 10 about center stick
  ps4.setDeadZone(RIGHT,10);     // Sets a Right Joystick Dead Zone axis range of +/- 10 about center stick


  Serial.begin(9600);     // configure the serial monitor for 9600 baud rate

}

void loop() {     // repeat in a loop

  Serial.print(prizm.readSonicSensorCM(3));   // print the CM distance to the serial monitor

  Serial.println("x");             // print "x"
  ps4.getPS4();                           // If PS4 controller has been succesfully connected, control motors
  PowerM1 = ps4.Motor(RX);                  // Power (speed) and direction of Motor 1 is set by position of Left Y-axis Joystick
  PowerM2 = ps4.Motor(LX);                  // Power (speed) and direction of Motor 2 is set by position of Right Y-axis Joystick
  prizm.setMotorPowers(PowerM1, -PowerM2);   // set motor output power levels for PRIZM DC motor channels 1 and 2
  if (ps4.Button(R2))
  {
    prizm.setServoPosition(2,0);
  }
  else if (ps4.Button(L2))
  {
    prizm.setServoPosition(2,180);
  }
 
}
