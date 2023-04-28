#include <IRremote.h>

int IR_RECEIVE_PIN = 11; // Pin number where IR receiver is connected
IRrecv irrecv(IR_RECEIVE_PIN);
decode_results results;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) { // If a code is received
    Serial.println(results.value, HEX); // Print the received code in hexadecimal format
    irrecv.resume(); // Receive the next code
  }
}
