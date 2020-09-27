int red = 9;
int min = 0;
int max = 255;
int wait = 5;

void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  for (int i = min; i < max; i++)
  {
    analogWrite(red, i);
    delay(wait);
  }
  for (int i = max; i > min; i--)
  {
    analogWrite(red, i);
    delay(wait);
  }
}