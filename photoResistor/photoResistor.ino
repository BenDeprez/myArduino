int readPin = A0;
int green = 8;
int red = 10;
int lightVal;
int wait = 250;

void setup()
{
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  lightVal = analogRead(readPin);
  Serial.println(lightVal);
  delay(wait);
  if (lightVal < 300)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
  else
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  }
}