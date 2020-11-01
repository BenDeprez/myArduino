int tiltPin = 2;
int redLed = 4;
int greenLed = 6;
int tiltVal;

void setup()
{
	pinMode(tiltPin, INPUT);
	pinMode(redLed, OUTPUT);
	pinMode(greenLed, OUTPUT);
	digitalWrite(tiltPin, HIGH);
	Serial.begin(9600);
}

void loop()
{
	tiltVal = digitalRead(tiltPin);
	// if upright, tiltVal = 0
	if (tiltVal == 1)
	{
		digitalWrite(greenLed, HIGH);
		digitalWrite(redLed, LOW);
	}
	else
	{
		digitalWrite(greenLed, LOW);
		digitalWrite(redLed, HIGH);
	}
}