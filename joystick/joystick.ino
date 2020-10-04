int xPin = A0;
int yPin = A1;
int sPin = 3;
int xVal;
int yVal;
int sVal;
int wait = 300;

void setup()
{
	Serial.begin(9600);
	pinMode(xPin, INPUT);
	pinMode(yPin, INPUT);
	pinMode(sPin, INPUT);
	pinMode(sPin, INPUT_PULLUP);
}

void loop()
{
	// read
	xVal = analogRead(xPin);
	yVal = analogRead(yPin);
	sVal = digitalRead(sPin);
  delay(wait);
	// print
	Serial.print("x = ");
	Serial.println(xVal);
	Serial.print("y = ");
	Serial.println(yVal);
	Serial.print("s = ");
	Serial.println(sVal);
}
