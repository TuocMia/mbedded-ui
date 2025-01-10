#ifndef _MYMQTT_H_
#define _MYMQTT_H_

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>

void mqtt_init();
void mqtt_loop();
void publishMessage(String message);
void sendJson();

#endif