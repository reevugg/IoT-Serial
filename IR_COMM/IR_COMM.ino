#include <IRremote.h>

// Define the IR LED pin
#define IR_LED_PIN 3

// Initialize the IR sender
IRsend irsend;

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initialize the IR sender
  //irsend.begin();
}

void loop() {
  // Send an IR signal with a specific HEX code
  unsigned long irCode = 0x00FF30CF; // Replace with your own HEX code
  irsend.sendNEC(irCode, 32); // Send the NEC IR signal
  
  // Wait for a few seconds before sending another signal
  delay(1000);
}
