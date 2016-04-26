#include <Servo.h>

Servo servo;

void setup() { servo.attach(9); }

void loop() {
	int value = analogRead(A0);
	int angle = value / 6;
	
	servo.write(angle);
}