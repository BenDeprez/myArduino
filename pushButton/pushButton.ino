int readPin = 8;
int ledPin = 10;
int buttonVal;

void setup()
{
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonVal = digitalRead(readPin);
  if (buttonVal == 1)
  {
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
  
}