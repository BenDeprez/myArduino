int readPin = A0;
int buzzer = 6;
int lightVal;
int toneVal;

void setup()
{
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  lightVal = analogRead(readPin);
  // 9940 = max wait, 60 = min wait, 1023 = max read val
  toneVal = (9940. / 1023.) * lightVal + 60;
  digitalWrite(buzzer, HIGH);
  delayMicroseconds(lightVal);
  digitalWrite(buzzer, LOW);
  delayMicroseconds(lightVal);
}