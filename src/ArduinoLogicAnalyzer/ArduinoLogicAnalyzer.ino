#include <Arduino.h>
#include <EEPROM.h>

#define VERSION "1-0-0-0"
#define TOTAL_ANALOG_PINS 7 // Arduino nano
#define TOTAL_DIGITAL_PINS 13 // Arduino nano

static const uint8_t analog_pins[] = {A0,A1,A2,A3,A4,A5,A6,A7};

void setup()
{
  
  Serial.begin(9600);

  if (isDebugMode)
    Serial.println("Starting Logic Analyzer");
}

void loop()
{
  serialPrintData();

  delay(500);
}

/* Serial Output */
void serialPrintData()
{
  for (int i = 0; i < TOTAL_ANALOG_PINS; i++)
  {
    Serial.print("A");
    Serial.print(i);
    Serial.print(":");
    Serial.print(analogRead(analog_pins[i]));
    Serial.print(";");
  }

  for (int i = 0; i < TOTAL_DIGITAL_PINS; i++)
  {
    Serial.print("D");
    Serial.print(i);
    Serial.print(":");
    Serial.print(digitalRead(i));
    Serial.print(";");
  }
  Serial.println();
}
