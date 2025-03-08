#include "mymqtt.h"

WiFiClient espClient;
PubSubClient client(espClient);

// Define a callback function to handle incoming messages
void callback(char* topic, byte* payload, unsigned int length) {
Serial.print("Message arrived in topic: ");
Serial.println(topic);
Serial.print("Message: ");
for (int i = 0; i < length; i++) {
Serial.print((char)payload[i]);
}
Serial.println();
}

// Connect to WiFi
void setupWiFi() {
Serial.print("Connecting to WiFi...");
WiFi.begin(WIFI_SSID, WIFI_Password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}
Serial.println("\nConnected to WiFi.");
}

// Reconnect to MQTT if disconnected
void reconnectMQTT() {
while (!client.connected()) {
    Serial.print("Connecting to MQTT...");
String clientId = "ESP32Client";
    clientId += String(random(0xffff), HEX);
if (client.connect(clientId.c_str())) {
    Serial.println("connected");
    client.subscribe(MQTT_Topic); // Subscribe to topic
}
else {
    Serial.print("failed, rc=");
    Serial.print(client.state());
    delay(2000);
        }
    }
}

//ket noi voi mqtt
void mqtt_init() {
    setupWiFi();
    client.setServer(MQTT_Server, MQTT_Port);
    client.setCallback(callback);
}

void mqtt_loop() {
    if (!client.connected()) {
        reconnectMQTT();
    }
    client.loop();
}

void sendJson(String tag, float range) {
    JsonDocument msg;
    msg["anchor"] = tag;
    msg["range"] = range;
    char MsgBuffer[100];
    serializeJson(msg, MsgBuffer);
    client.publish(MQTT_Topic, MsgBuffer);
}