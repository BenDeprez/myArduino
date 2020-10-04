// if the down button value is 0, and led value is greater than 0, reduce the led brightness
// if the up button value is 0, and led value is less than 255, increase the led brightness

int downPin = 13; // read val of decrease button
int upPin = 12; // read val of increase button
int ledPin = 9; // analog write of led
int downVal;
int upVal;
int ledVal = 0;
int wait = 10; // delay time

void setup()
{
	Serial.begin(9600);
	pinMode(downPin, INPUT);
	pinMode(upPin, INPUT);
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	downVal = digitalRead(downPin);
	upVal = digitalRead(upPin);
	if (downVal == 0 && ledVal > 0)
	{
	ledVal--;
	analogWrite(ledPin, ledVal);
	}
	if (upVal == 0 && ledVal < 255)
	{
	ledVal++;
	analogWrite(ledPin, ledVal);
	}
	delay(wait);
}