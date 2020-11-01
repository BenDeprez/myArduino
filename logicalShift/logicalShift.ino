// pin setup
int clockPin = 9;
int latchPin = 11;
int dataPin = 12;
int wait = 1000;

// hex setup
byte led = 0b01010101;

void setup()
{
	Serial.begin(9600);
	pinMode(clockPin, OUTPUT);
	pinMode(latchPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
}

void loop()
{
	digitalWrite(latchPin, LOW);
	shiftOut(dataPin, clockPin, LSBFIRST, led); // least significant bit first
	digitalWrite(latchPin, HIGH);
	// led = led / 2; // shift right
	// led = led * 2; // shift left
	delay(wait);
}