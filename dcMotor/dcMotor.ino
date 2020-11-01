// note: Since I'm running the powersupply off of the 5v of the Arduino, the values for the equations are adjusted.
/*
cd motor control chip L293D
	----notch----
EN1							+V
IN1							IN4
OUT1						OUT4
0V							0V
0V							0V
OUT2						OUT3
IN2							IN3
+V							EN2
*/

/*
EN1:				speed control
IN1/IN2:		direction
OUT1/OUT2:	motor connection (red1, black2)
0V:					ground
+V:					power supply connection
*/

// joystick
int yPin = A2;
int yVal;

//motor
int speedPin = 3;
int dir1 = 5;
int dir2 = 6;
float mSpeed;

// config
int wait = 1000;

void setup()
{
	// joystick
	pinMode(yPin, INPUT);

	// motor
	pinMode(speedPin, OUTPUT);
	pinMode(dir1, OUTPUT);
	pinMode(dir2, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	yVal = analogRead(yPin);
	if (yVal >= 420)
	{
		// counterclockwise
		digitalWrite(dir1, HIGH);
		digitalWrite(dir2, LOW);
		mSpeed = (255. / 420.) * yVal - 255;
	}
	else if (yVal < 420)
	{
		// clockwise
		digitalWrite(dir1, LOW);
		digitalWrite(dir2, HIGH);

		mSpeed = -(255. / 420.) * yVal + 255;
	}
	Serial.println(mSpeed);
	analogWrite(speedPin, mSpeed);
}
