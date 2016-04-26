void setup() {
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
}

void loop() {
	for (int i = 0; i <= 9; i++) {
		analogWrite(3, i * 25);

		for (int j = 0; j <= 9; j++) {
			analogWrite(5, j * 25);

			for (int k = 0; k <= 9; k++) {
				analogWrite(6, k * 25);
				delay(10);
			}
		}
	}
}