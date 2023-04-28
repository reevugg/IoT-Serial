int relay1 = 2;
int relay2 = 3;
int count;
int a;
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
if (a==1){digitalWrite(relay1, LOW);}
if (a==2){ digitalWrite(relay1, HIGH);}
if (a==3){digitalWrite(relay2, LOW);}
if (a==4){ digitalWrite(relay2, HIGH);}
}
