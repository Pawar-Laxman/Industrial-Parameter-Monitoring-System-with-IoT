#include <ESP8266WiFi.h>

// ---- WIFI DETAILS ----
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// ----- PIN ------
#define BUZZER D5

void setup() {
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  Serial.begin(9600);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi Connected");
}

void loop() {
  //It is used for alarm to sound 
  digitalWrite(BUZZER, HIGH);
  delay(2000);

  digitalWrite(BUZZER, LOW);
  delay(2000);
}
