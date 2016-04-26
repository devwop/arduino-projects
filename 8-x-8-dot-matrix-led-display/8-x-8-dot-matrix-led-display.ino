int digital[8] = { 10, 11, 12, 13, 14, 15, 16, 17 };
byte wordCode[8] = { 0xff, 0XE7, 0xe7, 0xdb, 0x81, 0xbd, 0x7e, 0xff };

void setup() {
	for (int i = 2; i <= 17; i++) {
		pinMode(i, OUTPUT);
		digitalWrite(i, HIGH);
	}
}

void loop() {
	for (int i = 0; i <= 7; i++) {
		digitalWrite(digital[i], HIGH);

		for (int j = 0; j <= 7; j++) {
			if (wordCode[i]&1 << j) { digitalWrite(9 - j, HIGH); }
			else { digitalWrite(9 - j, LOW); }
		}

		delayMicroseconds(1000);
		digitalWrite(digital[i], LOW);
	}
}