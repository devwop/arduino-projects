// SENDER
void setup() { pinMode(3, OUTPUT); }

void loop() {
	for (int i = 0; i < 100; i++) {
		digitalWrite(3, HIGH);
		delayMicroseconds(13);
		digitalWrite(3, LOW);
		delayMicroseconds(13);
	}

	digitalWrite(3, HIGH); 
	delay(500);
}

// RECEIVER
void setup() {
	pinMode(2, INPUT);
	pinMode(10, OUTPUT);
}

void loop() {
	int signalState = digitalRead(2);

	if (signalState) { digitalWrite(10, LOW); }
	else { digitalWrite(10, HIGH); }
}