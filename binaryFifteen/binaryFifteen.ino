int yellow = 2;
int green = 3;
int blue = 4;
int red = 5;
int hold = 200;

void setup()
{
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  /*0*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  delay(hold);
  /*1*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  delay(hold);
  /*2*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  delay(hold);
  /*3*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  delay(hold);
  /*4*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(hold);
  /*5*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(hold);
  /*6*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(hold);
  /*7*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(hold);
  /*8*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(hold);
  /*9*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(hold);
  /*10*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(hold);
  /*11*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(hold);
  /*12*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(hold);
  /*13*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(hold);
  /*14*/
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(hold);
  /*15*/
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(hold);
}