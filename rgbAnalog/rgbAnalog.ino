int red = 3;
int green = 5;
int blue = 6;
String chosenCol;
String msg = "red, blue, green, purple, orange, teal, white, off?";

void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Serial.println(msg);

  while (Serial.available() == 0)
  {
  }

  chosenCol = Serial.readString();

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
  else if (chosenCol == "purple")
  {
    analogWrite(red, 90);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  else if (chosenCol == "orange")
  {
    digitalWrite(red, HIGH);
    analogWrite(green, 90);
    digitalWrite(blue, LOW);
  }
  else if (chosenCol == "teal")
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    analogWrite(blue, 90);
  }
  else if (chosenCol == "white")
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
  }
  else if (chosenCol == "off")
  {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
}
