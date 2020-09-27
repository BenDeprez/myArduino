int i;
int potPin = A5;
float potVal;
int red = 7;
int wait = 500;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(wait);

  while (potVal > 1000)
  {
    digitalWrite(red, HIGH);
    delay(wait);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(wait);
  }

  digitalWrite(red, LOW);
}