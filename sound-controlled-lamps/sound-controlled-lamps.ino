void setup() {
	Serial.begin(9600);
	pinMode(3, OUTPUT);
}

void loop() {
	digitalWrite(3, HIGH);

	int sensorValue = analogRead(A0);
	int digitalValue = digitalRead(15);

	Serial.println(sensorValue);

	if (digitalValue) {
		digitalWrite(3, LOW);
		delay(1000);
	}
}