#include <Stepper.h>

// steppermotor
int stepsPerRev = 2048;
int motorSpeed = 10;
Stepper myStepper(stepsPerRev, 8, 10, 9, 11);

// button
int readPin = 7;
int btnPastState = 1;
int btnCurrentState;
int directionState = 1;

void setup()
{
	Serial.begin(9600);
	myStepper.setSpeed(motorSpeed);
	pinMode(readPin, INPUT);
	digitalWrite(readPin, HIGH);
}

void loop()
{
	btnCurrentState = digitalRead(readPin);
	if (btnPastState == 1 && btnCurrentState == 0)
	{
		directionState = directionState * (-1);
	}
	btnPastState = btnCurrentState;
	myStepper.step(directionState);
}