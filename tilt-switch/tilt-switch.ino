void setup() {
	pinMode(2, INPUT_PULLUP);
	pinMode(5, OUTPUT);
}

void loop() {
	int sensorValue = digitalRead(2);

	if (sensorValue) { digitalWrite(5, LOW); }
	else { digitalWrite(5, HIGH); }
}