void setup()
{
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(4, HIGH);
    delay(1);
    digitalWrite(4, LOW);
    delay(200);
  }
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(6, HIGH);
    delay(1);
    digitalWrite(6, LOW);
    delay(200);
  }
  for (int i = 0; i < 15; i++)
  {
    digitalWrite(8, HIGH);
    delay(1);
    digitalWrite(8, LOW);
    delay(200);
  }
  /* 
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(4, HIGH);
    delay(50);
    digitalWrite(4, LOW);
    delay(50);
  }
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(6, LOW);
    delay(50);
  }
  for (int i = 0; i < 15; i++)
  {
    digitalWrite(8, HIGH);
    delay(50);
    digitalWrite(8, LOW);
    delay(50);
  } */
}