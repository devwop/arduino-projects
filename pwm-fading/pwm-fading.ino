int brightness = 0;
int fadeAmount = 5;

void setup() { pinMode(9, OUTPUT); }

void loop() {
	analogWrite(9, brightness);

	brightness += fadeAmount;

	if (brightness == 0 || brightness == 255) { fadeAmount = -fadeAmount; }

	delay(30);
}