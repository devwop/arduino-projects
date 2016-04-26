void setup() { Serial.begin(9600); }

void loop() {
	float sensorValue = analogRead(A0);
	float temperature = (sensorValue / 1023) * 5 * 100;

	Serial.print("The temperature degree is: ");
	Serial.println(temperature);
	delay(1000);
}