int red = 3;
int green = 5;
int blue = 6;
int rate = 15;
int max = 255;
int r;
int g;
int b;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  while (r < max)
  {
    analogWrite(red, r);
    r++;
    delay(rate);
  }

  while (g < max)
  {
    analogWrite(red, r);
    analogWrite(green, g);
    r--;
    g++;
    delay(rate);
  }

  while (b < max)
  {
    analogWrite(green, g);
    analogWrite(blue, b);
    g--;
    b++;
    delay(rate);
  }

  while (r < max)
  {
    analogWrite(blue, b);
    analogWrite(red, r);
    b--;
    r++;
    delay(rate);
  }
}