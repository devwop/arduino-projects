byte digital[10] = {0xfc, 0x60, 0xda, 0xf2, 0x66, 0xb6, 0xbe, 0xe0, 0xfe, 0xf6};

void setup() {
	for (int i = 2; i <= 9; i++) {
		pinMode(i, OUTPUT);
		digitalWrite(i, HIGH);
	}
}

void loop() {
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 7; j++) {
			if (digital[i]&1 << j) { digitalWrite(9 - j, LOW); }
			else { digitalWrite(9 - j, HIGH); }
		}

		delay(500);
	}
}