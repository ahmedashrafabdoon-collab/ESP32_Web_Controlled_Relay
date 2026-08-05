#include <WiFi.h>
#include <WebServer.h>

const char*ssid = "My_ESP32";
const char*password = "88888888";

WebServer server(80);

int ledPin = 2;


void addCorsHeaders() {

server.sendHeader("Access-Control-Allow-Origin", "*");
server.sendHeader("Access-Control-Allow-Methods", "GET");
server.sendHeader("Access-Control-Allow-Headers", "Control-Type");

}

void handleOptions() {

addCorsHeaders();
server.send(204);


}

//------------------------SETUP--------------------------------------------------------------------------------------------------------------



void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(ledPin, OUTPUT);

WiFi.softAP(ssid, password);



Serial.println(WiFi.softAPIP());

server.on("/on", digitalWrite(ledPin, HIGH);


server.on("/off", digitalWrite(ledPin, LOW);


server.begin();
}


void loop() {
  // put your main code here, to run repeatedly:
server.handleClient();
}



























