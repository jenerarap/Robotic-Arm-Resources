#include <Servo.h>
int joystick;
int servocalisma;
Servo base;
Servo joint1;
Servo joint2;
Servo gripper;
int pot1;
int pot2;
int pot3;
int pot4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
base.attach(9);
joint1.attach(10);
joint2.attach(11);
gripper.attach(6);
base.write(90);
joint1.write(90);
joint2.write(90);
gripper.write(90);
delay(2000);
}

void loop() {
pot1 = analogRead(A0);
pot2 = analogRead(A1);
pot3 = analogRead(A2);
pot4 = analogRead(A3);
delay(10);
pot1 = map(pot1, 0, 1023, 0, 180);
pot2 = map(pot2, 0, 1023, 0, 180);
pot3 = map(pot3, 0, 1023, 0, 180);
pot4 = map(pot4, 0, 1023, 0, 180);

base.write(pot1);
Serial.println(pot1);
joint1.write(pot2);
Serial.println(pot2);
joint2.write(pot3);
Serial.println(pot3);
gripper.write(pot4);
Serial.println(pot4);
delay(100);
}
