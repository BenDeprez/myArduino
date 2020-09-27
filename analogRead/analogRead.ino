// pins
int readPin = A0;
int safePin = 2;
int warningPin = 4;
int dangerPin = 6;
// vars
int readVal;
int wait = 1000;
float v2 = 0.;
float maxVolt = 5.;
float maxVal = 1023.;
float safe = 2.;
float warning = 3.;
float danger = 4.;

void setup()
{
  pinMode(readPin, INPUT);
  pinMode(safePin, OUTPUT);
  pinMode(warningPin, OUTPUT);
  pinMode(dangerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read val from board
  readVal = analogRead(readPin);
  Serial.println(readVal);
  // convert binary to volts
  v2 = readVal * (maxVolt / maxVal);
  // if volts > 4, turn on warning led
  if (v2 < safe)
  {
    digitalWrite(safePin, HIGH);
    digitalWrite(warningPin, LOW);
    digitalWrite(dangerPin, LOW);
  }
  else if (v2 < warning)
  {
    digitalWrite(safePin, LOW);
    digitalWrite(warningPin, HIGH);
    digitalWrite(dangerPin, LOW);
  }
  else
  {
    digitalWrite(safePin, LOW);
    digitalWrite(warningPin, LOW);
    digitalWrite(dangerPin, HIGH);
  }

  // print voltage value and wait
  Serial.println(v2);
  delay(wait);
}