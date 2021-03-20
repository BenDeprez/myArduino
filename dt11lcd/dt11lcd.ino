#include <DHT.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27 // Define I2C Address where the PCF8574A is
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7
#define Type DHT11

LiquidCrystal_I2C lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);

int width = 16;
int height = 2;
int wait = 500;
int n = 0;
int sensePin = 2;
int setTime = 500;

// create object
DHT HT(sensePin, Type);

float humidity;
float oldHum = 0.0;
float tempC;
float oldTemp = 0.0;

void setup()
{
	Serial.begin(9600);
	HT.begin();
	lcd.begin(16, 2);
	lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
	lcd.setBacklight(HIGH);
	lcd.home();
	delay(setTime);
}

void loop()
{
	humidity = HT.readHumidity();
	tempC = HT.readTemperature();

	lcd.home();
	lcd.print("Humidity: ");
	lcd.print(humidity);

	lcd.setCursor(0, 1);
	lcd.print("Temp: ");
	lcd.print(tempC);

	if (humidity != oldHum || tempC != oldTemp)
	{
		lcd.clear();
		lcd.home();
		oldHum = humidity;
		oldTemp = tempC;
	}
}