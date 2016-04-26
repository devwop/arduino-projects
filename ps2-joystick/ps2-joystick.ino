int x = 0;
int y = 0;
int buttonState = 0;

void setup() {
	Serial.begin(9600);

	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(2, INPUT_PULLUP);
}

void loop() {
	x = analogRead(A0);
	y = analogRead(A1);
	buttonState = digitalRead(2);

	Serial.print("X: ");
	Serial.print(x);
	Serial.print(" | Y: ");
	Serial.print(y);
	Serial.print(" | Button: ");
	Serial.println(buttonState);

	delay(100);
}