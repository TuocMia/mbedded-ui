#include "header.h"

void OnOffDev1(lv_event_t * e)
{
    sendJson();
}

void OnOffLight1(lv_event_t * e){
    publishMessage("ON");
}
void OnOffDev2(lv_event_t * e){
    Serial.println("OnOffDev2");
}
void OnOffLight2(lv_event_t * e){
    Serial.println("OnOffLight2");
}
void OnOffrgb1(lv_event_t * e){
    Serial.println("OnOffrgb1");
}
void OnOffLight3(lv_event_t * e){
    Serial.println("OnOffLight3");
}
void OnOffrgb2(lv_event_t * e){
    Serial.println("OnOffrgb2");
}
void OnOffLight4(lv_event_t * e){
    Serial.println("OnOffLight4");
}
void rgbColor1(lv_event_t * e){
    Serial.println("rgbColor1");
}
void rgbBrightness1(lv_event_t * e){
    Serial.println("rgbBrightness1");
}

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
