int buttonPin = 2;
int buttonVal;
int wait = 200;

void setup()
{
	Serial.begin(9600);
	pinMode(buttonPin, INPUT);
	digitalWrite(buttonPin, HIGH);
}

void loop()
{
	buttonVal = digitalRead(buttonPin);
	Serial.println(buttonVal);
	delay(wait);
}