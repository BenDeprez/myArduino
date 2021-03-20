#include <DHT.h>
#define Type DHT11
int sensePin = 2;
int setTime = 500;

// create object
DHT HT(sensePin, Type);

float humidity;
float tempC;
float tempF;

void setup()
{
	Serial.begin(9600);
	HT.begin();
	delay(setTime);
}

void loop()
{
	humidity = HT.readHumidity();
	tempC = HT.readTemperature();
	tempF = HT.readTemperature(true);

	Serial.print("Humidity: ");
	Serial.print(humidity);

	Serial.print(" Temperature: ");
	Serial.print(tempC);
	Serial.println("°C");
	delay(1000);
}