void setup() { Serial.begin(9600); }

void loop() {
	int sensorValue = analogRead(A0);
	int digitalValue = digitalRead(15);

	Serial.print("Analog value: ");
	Serial.println(sensorValue);

	if (digitalValue) {
		Serial.println("The pin D is HIGH now");
		delay(1000);              
	}
}