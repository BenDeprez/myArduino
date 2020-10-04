#include <Servo.h>
int servoPin = 9;
int lightPin = A0;
float servoPos = 0.;
int lightVal;
int wait = 500;
Servo myServo;

// lighVal 25 = servoPos 0
// lightVal 700= servoPos 170

void setup()
{
	Serial.begin(9600);
	myServo.attach(servoPin);
}

void loop()
{
	lightVal = analogRead(lightPin);
	servoPos = (170. / 675.) * (lightVal - 25.);
	Serial.println(lightVal);
	Serial.println(servoPos);
	myServo.write(servoPos);
}