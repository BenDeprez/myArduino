int yellow = 8;
int red = 10;
int wait = 600;

void setup()
{
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(yellow, HIGH);
    delay(wait);
    digitalWrite(yellow, LOW);
    delay(wait);
  }

  for (int i = 0; i < 5; i++)
  {
    digitalWrite(red, HIGH);
    delay(wait);
    digitalWrite(red, LOW);
    delay(wait);
  }
}