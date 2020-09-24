int pin = 4;
int sDelay = 100;
int lDelay = 400;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  /* S */
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin, HIGH);
    delay(sDelay);
    digitalWrite(pin, LOW);
    delay(sDelay);
  }
  delay(lDelay);

  /* O */
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(lDelay);
  }
  delay(lDelay);

  /* S */
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin, HIGH);
    delay(sDelay);
    digitalWrite(pin, LOW);
    delay(sDelay);
  }
  delay(400);
}