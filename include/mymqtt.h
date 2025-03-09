#ifndef _MYMQTT_H_
#define _MYMQTT_H_

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>

#define WIFI_SSID            "TP-LINK_B9D2"
#define WIFI_Password        "21377570"

// MQTT Broker (replace with your broker if using a local one)
#define MQTT_Server     "45.118.147.52"
#define MQTT_Port       12004
#define MQTT_Topic      "device/light"

void mqtt_init();
void mqtt_loop();
void sendJson(String light, String state);

#endif
