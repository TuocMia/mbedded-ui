#include "header.h"
#include <esp_task_wdt.h>

#define WDT_TIMEOUT 3000

#define CONFIG_FREERTOS_NUMBER_OF_CORES 1 


int i = 0;
int last = millis();

esp_task_wdt_config_t twdt_config = {
    .timeout_ms = WDT_TIMEOUT,
    .idle_core_mask = (1 << CONFIG_FREERTOS_NUMBER_OF_CORES) - 1,    // Bitmask of all cores
    .trigger_panic = true,
};

void setup()
{   
    Serial.begin(115200);
    display_init();
    mqtt_init();
    gpio_init();
    Serial.println("Configuring WDT...");
    esp_task_wdt_deinit(); //wdt is enabled by default, so we need to deinit it first
    esp_task_wdt_init(&twdt_config); //enable panic so ESP32 restarts
    esp_task_wdt_add(NULL); //add current thread to WDT watch

}

void loop()
{ 
//   Reset the WDT every 1 second
    if (millis() - last >= 1000) {
        Serial.println("Resetting WDT...");
        esp_task_wdt_reset();
        last = millis();
    }
    mqtt_loop();
    Switch1State();
    Switch2State();
    Switch3State();
    delay(50);
}
