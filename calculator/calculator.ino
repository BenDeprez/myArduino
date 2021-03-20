#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

// setup display pins
#define I2C_ADDR    0x27  // Define I2C Address where the PCF8574A is
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

// variables
String ask1 = "1st number: ";
String ask2 = "2nd number: ";
String askOpr = "Operator: ";
int n1;
int n2;
char opr;
float result;
int wait = 500;

void setup()
{
  Serial.begin(9600);

  // init lcd
  lcd.begin(16,2);
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
}

void loop()
{
  // init cursor
  lcd.home();
  
  // prompt for 1st number
  lcd.print(ask1);
  while (Serial.available() == 0)
  {
  }
  n1 = Serial.parseInt();
  lcd.clear();

  // prompt for operator
  lcd.setCursor(0,1);
  lcd.print(n1);
  lcd.home();
  lcd.print(askOpr);
  while (Serial.available() == 0)
  {
  }
  opr = Serial.read();
  lcd.clear();

  // prompt for 2nd number
  lcd.setCursor(0,1);
  lcd.print(n1 + " " + opr);
  lcd.home();
  lcd.print(ask2);
  while (Serial.available() == 0)
  {
  }
  n2 = Serial.parseInt();
  lcd.clear();

  // print results
  lcd.setCursor(0,1); 
  switch(opr)
  {
    case '+':
      result = n1 + n2;
      lcd.print(n1);
      lcd.print(" + ");
      lcd.print(n2);
      lcd.print(" = ");
      break;
    case '-':
      result = n1 - n2;
      lcd.print(n1);
      lcd.print(" - ");
      lcd.print(n2);
      lcd.print(" = ");
      break;
    case '*':
      result = n1 * n2;
      lcd.print(n1);
      lcd.print(" * ");
      lcd.print(n2);
      lcd.print(" = ");
      break;
    case '/':
      result = n1 / n2;
      lcd.print(n1);
      lcd.print(" / ");
      lcd.print(n2);
      lcd.print(" = ");
      break;
    default:
      lcd.clear();
      lcd.print("Invalid operator");
      delay(wait);
  }
}