int led = 13;

// the setup routine runs once when you press reset:
void setup() { 
  Serial.begin( 9600 );  
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  // listen for the data
  if ( Serial.available() > 0 ) {
    // read a numbers from serial port
    int count = Serial.parseInt();
    Serial.print("INPUT?? ");
    
     // print out the received number
    if (count > 0) {
        Serial.print("You have input: ");
        Serial.println(String(count));
        // blink the LED
        for (int lup = 0; lup < count; lup++) { 
        // turn the pin on:
        digitalWrite(led, HIGH);   
        delay(500);                  
        // turn the pin off:
        digitalWrite(led, LOW);
        delay(500);    
  }
    }
  }               // wait for a second
}
