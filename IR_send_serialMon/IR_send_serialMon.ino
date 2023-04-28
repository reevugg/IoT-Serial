#include <IRremote.h>

// Define the IR LED pin
#define IR_LED_PIN 10

// Initialize the IR sender
IRsend irsend;

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initialize the IR sender
  irsend.begin();
}

void loop() {
  // Check if there is data available on the serial monitor
  if (Serial.available() > 0) {
    // Read the incoming HEX code from the serial monitor
    String hexString = Serial.readStringUntil('\n');
    hexString.trim();
    
    // Convert the HEX code string to an unsigned long integer
    unsigned long irCode = strtoul(hexString.c_str(), NULL, 16);

    // Send the IR signal with the converted HEX code
    irsend.sendNEC(irCode, 32); // Send the NEC IR signal
    irsend.sendSony(0x68B92, 20);
  }
}
