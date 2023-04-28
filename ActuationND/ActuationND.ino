#include <IRremote.h>
#define IR_LED_PIN 7
int relay1 = 2;
int relay2 = 3;
int count;
int a;
IRsend irsend;// Initialize the IR sender

// Enabling bluetooth serial connection to achieve the slave control.
void setup() {
  Serial.begin( 9600 );
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);// 9600 is the default baud rate for the serial Bluetooth module
  digitalWrite(relay1, HIGH);//disbale relay
  digitalWrite(relay2, HIGH);//disable relay
}
void loop() {
  if(Serial.available())
  {
   a=Serial.parseInt();
   Serial.println(a);
  }
//codes for actuation 

//Light control ser 1 ser 2
if (a==1){digitalWrite(relay1, LOW);}//Light on
if (a==2){ digitalWrite(relay1, HIGH);}//Light off
if (a==3){digitalWrite(relay2, LOW);}//Appliance on
if (a==4){ digitalWrite(relay2, HIGH);}//appliance off
if (a==5)
{
  irsend.sendNEC(0x00FF30CFe, 32);//TV ON
}


}
