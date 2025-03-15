#include "header.h"

WiFiClient ValiSmarthome;
PubSubClient client(ValiSmarthome);

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
String clientId = "ValiSmarthome";
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
    digitalWrite(OutputPin1, LOW);
    delay(200);
    digitalWrite(OutputPin1, HIGH);
}

void Light2OnOff(lv_event_t * e){
    digitalWrite(OutputPin2, LOW);
    delay(200);
    digitalWrite(OutputPin2, HIGH);
}

void Light3OnOff(lv_event_t * e){
    digitalWrite(OutputPin3, LOW);
    delay(200);
    digitalWrite(OutputPin3, HIGH);
}

void Switch1State(){
    int state = digitalRead(InputPin1);
    if(state == LOW){
        lv_obj_add_state(ui_OnOff_Button1, LV_STATE_CHECKED);
    }
    else{
        lv_obj_clear_state(ui_OnOff_Button1, LV_STATE_CHECKED);
    }
}

void Switch2State(){
    int state = digitalRead(InputPin2);
    if(state == LOW){
        lv_obj_add_state(ui_OnOff_Button2, LV_STATE_CHECKED);
    }
    else{
        lv_obj_clear_state(ui_OnOff_Button2, LV_STATE_CHECKED);
    }
}

void Switch3State(){
    int state = digitalRead(InputPin3);
    if(state == HIGH){
        lv_obj_add_state(ui_OnOff_Button3, LV_STATE_CHECKED);
    }
    else{
        lv_obj_clear_state(ui_OnOff_Button3, LV_STATE_CHECKED);
    }
}