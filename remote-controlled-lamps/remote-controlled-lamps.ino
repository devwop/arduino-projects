#include <IRremote.h>

IRrecv irrecv(6);
decode_results results;

void setup() {
	pinMode(6, INPUT);
	pinMode(3, OUTPUT);
	irrecv.enableIRIn();
}

void loop() {
	if (irrecv.decode(&results)) { irrecv.resume(); }
	if (results.value == 0x00FF02FD) { digitalWrite(3, LOW); }
	if (results.value == 0x00FF22DD) { digitalWrite(3, HIGH); }
}