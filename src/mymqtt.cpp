#include "header.h"

WiFiClient ValiSmarthome;
PubSubClient client(ValiSmarthome);


// Define a callback function to handle incoming messages
void callback(char* topic, byte* message, unsigned int length) {
    if (strcmp(topic, MQTT_Light_Topic) == 0) {
        String messageTemp = String((char*)message).substring(0, length);
        Serial.println(messageTemp);
        lv_label_set_text(ui_Lux_Label, messageTemp.c_str());
    }

    if (strcmp(topic, MQTT_Temp_Topic) == 0) {
        String messageTemp = String((char*)message).substring(0, length);
        Serial.println(messageTemp);
        lv_label_set_text(ui_Temp_Label, messageTemp.c_str());
    }

    if (strcmp(topic, MQTT_Hum_Topic) == 0) {
        String messageTemp = String((char*)message).substring(0, length);
        Serial.println(messageTemp);
        lv_label_set_text(ui_Humid_Label, messageTemp.c_str());
    }

    if (strcmp(topic, MQTT_Hour_Topic) == 0) {
        String messageTemp = String((char*)message).substring(0, length);
        Serial.println(messageTemp);
        lv_label_set_text(ui_Hour, messageTemp.c_str());
    }

    if (strcmp(topic, MQTT_Min_Topic) == 0) {
        String messageTemp = String((char*)message).substring(0, length);
        Serial.println(messageTemp);
        lv_label_set_text(ui_Min, messageTemp.c_str());
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
if (client.connect(MQTT_ClientID, MQTT_User, MQTT_Password)) {
    Serial.println("connected");

    // Subscribe to topic
    client.subscribe(MQTT_Light_Topic);
    client.subscribe(MQTT_Hour_Topic); 
    client.subscribe(MQTT_Temp_Topic);
    client.subscribe(MQTT_Hum_Topic);
    client.subscribe(MQTT_Min_Topic);
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