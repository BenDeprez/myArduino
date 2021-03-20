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
int num1;
int num2;
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
  lcd.home();
  
  // prompt 1st
  lcd.print(ask1);
  while (Serial.available() == 0)
  {
  }
  num1 = Serial.parseInt();
  lcd.clear();

  // prompt operator
  lcd.setCursor(0,1);
  lcd.print(num1);
  lcd.home();
  lcd.print(askOpr);
  while (Serial.available() == 0)
  {
  }
  opr = Serial.read();
  lcd.clear();

  // prompt 2nd
  lcd.setCursor(0,1);
  lcd.print(num1 + " " + opr);
  lcd.home();
  num2 = lcd.print(ask2);
  while (Serial.available() == 0)
  {
  }
  lcd.clear();

  switch(opr)
  {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
  }

  // print result
  lcd.setCursor(0,1);
  lcd.print(num1 + " " + opr + " " + num2 + " " + " = " + result);
  
  
}
