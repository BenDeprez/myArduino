byte decimalByte = 0;
byte hexByte = 0x0;
byte binaryByte = B00000000;
int myByte = 0;
int wait = 1000;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.print(myByte, DEC);
	Serial.print(" = ");
	Serial.print(myByte, HEX);
	Serial.print(" = ");
	Serial.println(myByte, BIN);
	myByte = myByte + 1;
	delay(wait);
}