int readPin = 8;
int ledPin = 10;
int ledState = 0;
int buttonPastState = 1;
int buttonCurrentState;
int wait = 50;

void setup()
{
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonCurrentState = digitalRead(readPin);

  if (buttonPastState == 0 && buttonCurrentState == 1) {
    if (ledState == 0)
      {
        digitalWrite(ledPin, HIGH);
        ledState = 1;
      }
      else
      {
        digitalWrite(ledPin, LOW);
        ledState = 0;
      }
  }
  
  buttonPastState = buttonCurrentState;
  delay(wait);
}