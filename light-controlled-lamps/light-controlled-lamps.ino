void setup() { pinMode(2, OUTPUT); }

void loop() {
	int sensorValue = analogRead(A0);

	if (analogRead(A3) > 500) { digitalWrite(2, HIGH); }
	else { digitalWrite(2, LOW); }
}