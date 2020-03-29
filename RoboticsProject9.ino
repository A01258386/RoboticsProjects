#include <Servo.h>
//servo motor control with joystick 

Servo motor;
int input;
int angle;

void setup() {
 motor.attach(3);
}
void loop() {
 input=analogRead(A0);
 angle=map(input,0,1023,0,180);
 motor.write(angle);

}
