int relay1 = 2;
int relay2 = 3;

void setup() {
  // Set the relay pins as outputs
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  
  // Turn off all the relays initially
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
}

void loop() {
  // Turn on relay 1 for 1 second
  digitalWrite(relay1, HIGH);//disable 1
  digitalWrite(relay2, HIGH);//disable 2
  delay(1000);
  //digitalWrite(relay1, LOW);//enable 1
  //digitalWrite(relay2, LOW);//enable 2
  delay(1000);
  
  
}
