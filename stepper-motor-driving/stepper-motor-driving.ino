void setup() {
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

void loop() {
	for (int i = 0; i < 512; i++) { clockWiseRotate(); }

	delay(1000);

	for (int i = 0; i < 512; i++) { counterClockWiseRotate(); }

	delay(1000);
}

void clockWiseRotate() {
	step1();
	step2();
	step3();
	step4();
	step5();
	step6();
	step7();
	step8();
}

void counterClockWiseRotate() {
	step8();
	step7();
	step6();
	step5();
	step4();
	step3();
	step2();
	step1();
}

void step1() {
	digitalWrite(8, HIGH);
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(2);
}

void step2() {
	digitalWrite(8, HIGH);
	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(2);
}

void step3() {
	digitalWrite(8, LOW);
	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(2);
}

void step4() {
	digitalWrite(8, LOW);
	digitalWrite(9, HIGH);
	digitalWrite(10, HIGH);
	digitalWrite(11, LOW);
	delay(2);
}

void step5() {
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);
	digitalWrite(10, HIGH);
	digitalWrite(11, LOW);
	delay(2);
}

void step6() {
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);
	digitalWrite(10, HIGH);
	digitalWrite(11, HIGH);
	delay(2);
}

void step7() {
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, HIGH);
	delay(2);
}

void step8() {
	digitalWrite(8, HIGH);
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, HIGH);
	delay(2);
}