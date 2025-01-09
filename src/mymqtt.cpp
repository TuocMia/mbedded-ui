#include "mymqtt.h"

const char* ssid = "Rang Dong Lab_2G";
const char* password = "ktdt123456";

// MQTT Broker (replace with your broker if using a local one)
const char* Mqtt_Server = "broker.hivemq.com"; // Public broker for testing
const int Mqtt_Port = 1883;
const char* Mqtt_Topic = "test/arduino";

WiFiClient wifiClient;
PubSubClient client(wifiClient);

// Define a callback function to handle incoming messages
void callback(char* topic, byte* payload, unsigned int length) {
Serial.print("Message arrived in topic: ");
Serial.println(topic);
Serial.print("Message: ");
for (int i = 0; i < length; i++) {
Serial.print((char)payload[i]);
}
Serial.println();

if (String(topic) == "test/arduino") {
        String message = String((char*)payload).substring(0, length);
        if (message == "ON") {
            Serial.println("Light ON");
        } 
        else if (message == "OFF") {
            Serial.println("Light OFF");
        }
    }
}

// Connect to WiFi
void setupWiFi() {
Serial.print("Connecting to WiFi...");
WiFi.begin(ssid, password);
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
if (client.connect("ArduinoClient")) {
Serial.println("connected");
client.subscribe(Mqtt_Topic); // Subscribe to topic
} else {
Serial.print("failed, rc=");
Serial.print(client.state());
delay(2000);
}
}
}

void mqtt_init() {
    setupWiFi();
    client.setServer(Mqtt_Server, Mqtt_Port);
    client.setCallback(callback);
}

void publishMessage(String message) {
if (!client.connected()) {
reconnectMQTT();
}
client.loop();
// Publish a test message every 5 seconds
static unsigned long lastMsgTime = 0;
unsigned long now = millis();
if (now - lastMsgTime > 5000) {
lastMsgTime = now;
Serial.print("Publishing message: ");
Serial.println(message);
client.publish(Mqtt_Topic, message.c_str());
}
}