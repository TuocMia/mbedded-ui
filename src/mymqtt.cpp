#include "header.h"

<<<<<<< HEAD
const char* ssid = "Rang Dong Lab_2G";
const char* password = "ktdt123456";

// MQTT Broker (replace with your broker if using a local one)
const char* Mqtt_Server = "broker.hivemq.com"; // Public broker for testing
const int Mqtt_Port = 1883;
const char* Mqtt_Topic = "test/arduino";

bool check = false;

=======
>>>>>>> a267db5 (1.0.0)
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

<<<<<<< HEAD
void PublishJson(String state, String name) {
    JsonDocument message;
    message[name] = state;
    char Msgbuffer[100];
    serializeJson(message, Msgbuffer);
    client.publish(Mqtt_Topic, Msgbuffer);
=======
void sendJson(String addr, float range) {
    JsonDocument msg;
    msg["ID"] = addr;
    msg["Range"] = range;
    char MsgBuffer[100];
    serializeJson(msg, MsgBuffer);
    client.publish(MQTT_Topic, MsgBuffer);
>>>>>>> a267db5 (1.0.0)
}

void OnOffDev1(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "Device1");
        check = true;
    }
    else{
        PublishJson("OFF", "Device1");
        check = false;
    }
}

void OnOffLight1(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "Light1");
        check = true;
    }
    else{
        PublishJson("OFF", "Light1");
        check = false;
    }
}
void OnOffDev2(lv_event_t * e){
    if(check == false){
        PublishJson("ON", "Device2");
        check = true;
    }
    else{
        PublishJson("OFF", "Device2");
        check = false;
    }
}
void OnOffLight2(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "Light2");
        check = true;
    }
    else{
        PublishJson("OFF", "Light2");
        check = false;
    }
}
void OnOffrgb1(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "RGB1");
        check = true;
    }
    else{
        PublishJson("OFF", "RGB1");
        check = false;
    }
}
void OnOffLight3(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "Light3");
        check = true;
    }
    else{
        PublishJson("OFF", "Light3");
        check = false;
    }
}
void OnOffrgb2(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "RGB2");
        check = true;
    }
    else{
        PublishJson("OFF", "RGB2");
        check = false;
    }
}
void OnOffLight4(lv_event_t * e) {
    if(check == false){
        PublishJson("ON", "Light4");
        check = true;
    }
    else{
        PublishJson("OFF", "Light4");
        check = false;
    }   
}
void rgbColor1(lv_event_t * e){
    Serial.println("rgbColor1");
}
void rgbBrightness1(lv_event_t * e){
    Serial.println("rgbBrightness1");
}

//chinh do sang light 1 va publish len mqtt
void ui_event_Light1_Brightness_Arc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_Brightness_Light1, target, "", "%");
        JsonDocument message;
        message["Light 1"] = (int)lv_arc_get_value(target) ;
        char MsgBuffer[100];
        serializeJson(message, MsgBuffer);
        client.publish(Mqtt_Topic, MsgBuffer); 
    }
}

//chinh do sang light 2 va publish len mqtt
void ui_event_Light2_Brightness_Arc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_Brightness_Light2, target, "", "%");
        JsonDocument message;
        message["Light 2"] = (int)lv_arc_get_value(target) ;
        char MsgBuffer[100];
        serializeJson(message, MsgBuffer);
        client.publish(Mqtt_Topic, MsgBuffer); 
    }
}

//chinh do sang light 3 va publish len mqtt
void ui_event_Light3_Brightness_Arc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_Brightness_Light3, target, "", "%");
        JsonDocument message;
        message["Light 3"] = (int)lv_arc_get_value(target) ;
        char MsgBuffer[100];
        serializeJson(message, MsgBuffer);
        client.publish(Mqtt_Topic, MsgBuffer); 
    }
}
//chinh do sang light 4 va publish len mqtt
void ui_event_Light4_Brightness_Arc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_Brightness_Light4, target, "", "%");
        JsonDocument message;
        message["Light 4"] = (int)lv_arc_get_value(target) ;
        char MsgBuffer[100];
        serializeJson(message, MsgBuffer);
        client.publish(Mqtt_Topic, MsgBuffer); 
    }
}