#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer server;

char* ssid = "Ultimate Hacker";
char* password = "crompton";

int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);
  
WiFi.begin(ssid, password);
Serial.begin(115200);

// Connecting to Wi-Fi
while(WiFi.status() != WL_CONNECTED){
  Serial.print(".");
  delay(500);
  }

// Printing IP Address once connected
  Serial.println("");
  Serial.print("IP Address ");
  Serial.print(WiFi.localIP());

  // Server setup
  server.on("/", toggleLED);
  server.begin();
  Serial.println("Server started");
}

void loop() {
  // put your main code here, to run repeatedly:
  server.handleClient();
}

// Function to toggle LED
void toggleLED(){
  server.send(200, "text/plain", "LED toggled");
  String msg = server.arg("msg");
  Serial.println(msg);
  digitalWrite(pinLED, !digitalRead(pinLED));
  server.send(204, "");
  }
