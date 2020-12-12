
#define led 13 //LED pin on UNO, HopeDuino
//#define led 9  //Moteino

void setup() {
   pinMode(led,OUTPUT);
  

}


void loop() {
     digitalWrite(led,LOW);
     delay(1000);
     digitalWrite(led,HIGH);
     delay(1000);
}
