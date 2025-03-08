#ifndef _MYMQTT_H_
#define _MYMQTT_H_

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>

#define WIFI_SSID            "Rang Dong Lab_2G"
#define WIFI_Password        "ktdt123456"

// MQTT Broker (replace with your broker if using a local one)
#define MQTT_Server     "45.118.147.52"
#define MQTT_Port       12004
#define MQTT_Topic      "dw1000/anchor"

void mqtt_init();
void mqtt_loop();
void sendJson(String state, String name);

#endif
