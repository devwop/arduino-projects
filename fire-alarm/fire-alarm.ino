void setup() { Serial.begin(9600); }

void loop() {
	float sensorValue = analogRead(A0);
	float temperature = (sensorValue / 1023) * 5 * 100;

	Serial.print("The temperature degree is: ");
	Serial.println(temperature);

	if (temperature > 37.5) {
		tone(7, 494, 500);
		delay(2000);
	}

	delay(500);
}