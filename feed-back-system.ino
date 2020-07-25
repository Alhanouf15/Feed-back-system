#include <Servo.h>
Servo motor;
int x,y;

void setup() {
  // put your setup code here, to run once:
motor.attach(7);

pinMode(A2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(A2);
y = map (x,0,1023,0,180);
motor.write(y);
}
