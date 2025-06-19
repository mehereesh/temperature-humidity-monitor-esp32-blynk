# temperature-humidity-monitor-esp32-blynk
Real-time Temperature and Humidity Monitoring with ESP32 and Blynk

# 🌡️ Temperature & Humidity Monitor with ESP32 + DHT22 + Blynk

Monitor real-time **temperature** and **humidity** data using an ESP32 and DHT22 sensor, with live visualization on the Blynk IoT platform.

---

## 🧰 Components Used

| Component     | Quantity |
|--------------|----------|
| ESP32 Board   | 1        |
| DHT22 Sensor  | 1        |
| Jumper Wires  | As needed |
| Breadboard    | Optional |
| 10K Resistor (between VCC and Data) | 1 |

---

## ⚙️ Circuit Diagram

| DHT22 Pin | ESP32 Pin |
|-----------|-----------|
| VCC       | 3.3V or 5V |
| GND       | GND       |
| DATA      | GPIO 4     |

> 🔁Optional Use **BreadBoard** with **10KΩ pull-up resistor** between **VCC** and **DATA**.
![WhatsApp Image 2025-06-19 at 17 25 33_824e30da](https://github.com/user-attachments/assets/bae4a90f-88fe-407b-aa55-345326d3aeb3)

---

## 📱 Blynk Setup

1. Install the **Blynk IoT** app.
2. Create a template:
   - ID: `Your Blynk id`
   - Name: "Temperature and humidity monitor"
3. Add widgets:
   - **Gauge/Display** on `V0` → Temperature
   - **Gauge/Display** on `V1` → Humidity
4. Set update interval: **2 seconds**

---

## 🧪 Output Example

![Screenshot 2025-06-19 170510](https://github.com/user-attachments/assets/467f995b-96ce-4c92-b338-3993988c826d)
