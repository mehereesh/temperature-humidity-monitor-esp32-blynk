#define BLYNK_TEMPLATE_ID "TMPL3o7Uj9a9k"
#define BLYNK_TEMPLATE_NAME "Temperature and humidity monitor"
#define BLYNK_AUTH_TOKEN "LQ4L0GR9gZBQXd93GMerXZPP5BgARp6s"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "MEHER1951";
char pass[] = "12345678";

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

void sendSensor() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("❌ Failed to read from DHT22 sensor!");
    return;
  }

  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  Serial.print("🌡️ Temp: ");
  Serial.print(t);
  Serial.print(" °C, 💧 Humidity: ");
  Serial.println(h);
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(2000L, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();
}
