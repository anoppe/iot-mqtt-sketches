#include <ESP8266WiFi.h>


#include <PubSubClient.h>

const char* ssid = "";
const char* password = "";

WiFiClient espClient;

// lets connect to wifi to be able to communicate witht the outside world
void setup_wifi() {
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  // print the ip adres for debug purposes
  Serial.print("WiFi connected - ESP IP address: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {
  Serial.println("some logging");

  delay(1000);
}
