#include "header.h"

WiFiClient espClient;
PubSubClient client(espClient);

bool power1 = false;
bool power2 = false;
bool power3 = false;

// Define a callback function to handle incoming messages
void callback(char* topic, byte* payload, unsigned int length) {
    Serial.print("Message arrived in topic: ");
    Serial.println(topic);

    char message[length + 1]; 
    memcpy(message, payload, length);
    message[length] = '\0'; 

    Serial.print("Message: ");
    Serial.println(message); 

    // Parse JSON
    JsonDocument doc;
    DeserializationError error = deserializeJson(doc, message);

    // Test if parsing succeeds
    if (error) {
        Serial.print("JSON parsing failed: ");
        Serial.println(error.c_str());
        return;
    }

    //Fetch values
    const char* device = doc["Device"];
    const char* power = doc["Power"];

    Serial.print("Device: ");
    Serial.println(device);
    Serial.print("Power: ");
    Serial.println(power);
    
    // Handler msg from mqtt
    //Light1
    if (strcmp(device, "Light 1") == 0 && strcmp(power, "ON") == 0) {
        delay(100);
        lv_obj_add_state(ui_OnOff_Button1, LV_STATE_CHECKED);
        power1 = true;
    }
    if (strcmp(device, "Light 1") == 0 && strcmp(power, "OFF") == 0) {
        delay(100);
        lv_obj_clear_state(ui_OnOff_Button1, LV_STATE_CHECKED);
        power1 = false;
    }

    //Light2
    if (strcmp(device, "Light 2") == 0 && strcmp(power, "ON") == 0) {
        delay(100);
        lv_obj_add_state(ui_OnOff_Button2, LV_STATE_CHECKED);
        power2 = true;
    }
    if (strcmp(device, "Light 2") == 0 && strcmp(power, "OFF") == 0) {
        delay(100);
        lv_obj_clear_state(ui_OnOff_Button2, LV_STATE_CHECKED);
        power2 = false;
    }

    //Light3
    if (strcmp(device, "Light 3") == 0 && strcmp(power, "ON") == 0) {
        delay(100);
        lv_obj_add_state(ui_OnOff_Button3, LV_STATE_CHECKED);
        power3 = true;
    }
    if (strcmp(device, "Light 3") == 0 && strcmp(power, "OFF") == 0) {
        delay(100);
        lv_obj_clear_state(ui_OnOff_Button3, LV_STATE_CHECKED);
        power3 = false;
    }
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
    client.subscribe(MQTT_Light_Topic);
    client.subscribe(MQTT_Time_Topic); // Subscribe to topic
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

void publish_light_state(String light, String state) {
    JsonDocument msg;
    msg["Device"] = light;
    msg["Power"] = state;
    char MsgBuffer[100];
    serializeJson(msg, MsgBuffer);
    client.publish(MQTT_Light_Topic, MsgBuffer);
}

void publish_time_request() {
    JsonDocument msg;
    msg["Time"] = "Request";
    char MsgBuffer[100];
    serializeJson(msg, MsgBuffer);
    client.publish(MQTT_Time_Topic, MsgBuffer);
}

void Light1OnOff(lv_event_t * e){
    if(power1 == false){
        publish_light_state("Light 1", "ON");
        power1 = true;
    }
    else{
        publish_light_state("Light 1", "OFF");
        power1 = false;
    }
}
void Light2OnOff(lv_event_t * e){
    if(power2 == false){
        publish_light_state("Light 2", "ON");
        power2 = true;
    }
    else{
        publish_light_state("Light 2", "OFF");
        power2 = false;
    }
}
void Light3OnOff(lv_event_t * e){
    if(power3 == false){
        publish_light_state("Light 3", "ON");
        power3 = true;
    }
    else{
        publish_light_state("Light 3", "OFF");
        power3 = false;
    }
}