int buzzer = 8;
int potPin = A0;
int potVal;
float toneVal;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop()
{
  potVal = analogRead(potPin);
  toneVal = (9940. / 1023.) * potVal + 60;
  digitalWrite(buzzer, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzer, LOW);
  delayMicroseconds(toneVal);
}