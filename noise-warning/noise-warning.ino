void setup() { for (int i = 2; i <= 13; i++) { pinMode(i, OUTPUT); } }

void loop() {
	int sensorValue = analogRead(A0);

	if (sensorValue <= 25) { set(2); }
	else if (25 < sensorValue && sensorValue <= 50) { set(3); }
	else if (50 < sensorValue && sensorValue <= 75) { set(4); }
	else if (75 < sensorValue && sensorValue <= 100) { set(5); }
	else if (100 < sensorValue && sensorValue <= 125) { set(6); }
	else if (125 < sensorValue && sensorValue <= 150) { set(7); }
	else if (150 < sensorValue && sensorValue <= 175) { set(8); }
	else if (175 < sensorValue && sensorValue <= 200) { set(9); }
	else if (200 < sensorValue && sensorValue <= 225) { set(10); }
	else if (225 < sensorValue && sensorValue <= 250) { set(11); }
	else if (250 < sensorValue && sensorValue <= 275) { set(12); }
	else { set(13); }

	delay(10);
}

void set(int pin) {
	for (int i = 2; i <= 13; i++) {
		if (i == pin) { digitalWrite(i, HIGH); }
		else { digitalWrite(i, LOW); }
	}
}