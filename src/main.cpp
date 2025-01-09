#include "header.h"

void setup()
{
    display_init();
    delay(1000);
    mqtt_init();
}

void loop()
{
    Serial.println("Hello, world!");
    delay(1000);
}
