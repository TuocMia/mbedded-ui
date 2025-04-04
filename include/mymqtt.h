#ifndef _MYMQTT_H_
#define _MYMQTT_H_

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

#define WIFI_SSID               "PTIT-RD-01"
#define WIFI_Password           "11246879"

// MQTT Broker (replace with your broker if using a local one)
#define MQTT_Server             "45.118.147.52"
#define MQTT_Port               12004
#define MQTT_User               "iot-ptit"
#define MQTT_Password           "12345678"
#define MQTT_ClientID           "smarthome_vali_wavehare_lcd"
#define MQTT_Light_Topic        "smarthome_vali/device/light"
#define MQTT_Hour_Topic         "smarthome_vali/device/hour"
#define MQTT_Min_Topic          "smarthome_vali/device/min"
#define MQTT_Temp_Topic         "smarthome_vali/device/temp"
#define MQTT_Hum_Topic          "smarthome_vali/device/hum"

void mqtt_init();
void mqtt_loop();
void Switch1State();
void Switch2State();
void Switch3State();

#endif
