int blinks;
int i;
int led = 7;
int wait = 200;
String msg = "How many blinks for the LED: ";

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);

  // while there is no data from the serial monitor, do nothing
  while (Serial.available() == 0)
  {
  }

  blinks = Serial.parseInt();

  while (i < blinks)
  {
    digitalWrite(led, HIGH);
    delay(wait);
    digitalWrite(led, LOW);
    delay(wait);
    i++;
  }
  i = 0;
}