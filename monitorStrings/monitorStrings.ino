int red = 2;
int green = 4;
int blue = 6;
String chosenCol;
String msg = "Hello, what LED would you like to light, red, green or blue? ";

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);

  while (Serial.available() == 0)
  {
  }

  chosenCol = Serial.readString();
  Serial.println(chosenCol);

  if (chosenCol == "red")
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  else if (chosenCol == "green")
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  else if (chosenCol == "blue")
  {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
}