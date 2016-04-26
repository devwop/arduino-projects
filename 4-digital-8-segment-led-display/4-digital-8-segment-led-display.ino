byte code[10] = {0xfc, 0x60, 0xda, 0xf2, 0x66, 0xb6, 0xbe, 0xe0, 0xfe, 0xf6};
char string[4] = {'2', '0', '1', '5'};
int digital[4] = {10, 11, 12, 13};

void setup() {
	for (int i = 2; i <= 13; i++) {
		pinMode(i, OUTPUT);
		digitalWrite(i, HIGH);
	}
}

void loop() {
	int temporary = 0;

	for (int i = 0; i <= 3; i++) {
		digitalWrite(digital[i], HIGH);
		temporary = string[i] - 40;

		for (int j = 0; j <= 7; j++) {
			if (digital[temporary]&1 << j) { digitalWrite(9 - j, LOW); }
			else { digitalWrite(9 - j, HIGH); }
		}

		delay(1);
		digitalWrite(digital[i], LOW);
	}
}