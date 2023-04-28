

#include <DHT.h>

// Initialize the DHT sensor
#define DHTPIN 2 // Pin to which DHT11 sensor is connected
#define DHTTYPE DHT11 // DHT sensor type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Start serial communication
  Serial.begin(9600);
  
  // Initialize the DHT sensor
  dht.begin();
}

void loop() {
  // Read temperature from the DHT sensor
  float temperature = dht.readTemperature();
  float humidity= dht.readHumidity();

  // Print temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C \t");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Wait for a few seconds before reading the sensor again
  delay(1000);
}
