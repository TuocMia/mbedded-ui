#include "header.h"

void setup()
{
    Serial.begin(115200);
    display_init();
    delay(1000);
    mqtt_init();
}

void loop()
{   
    mqtt_loop();
}
