/*
 * Test program, echo serial in 
 * if "1", LED on. if "0" LED off
 */
#define led LED_BUILTIN 
// #define led 17          //ProMicro Only blink
 
 void setup()  
 {  
  Serial.begin(9600);  
  
  pinMode(led, OUTPUT);
 } 
  
 void loop()  
 {  
  char c;
  if(Serial.available())  
  {  
   c = Serial.read();  
     Serial.print(c);  
     if (c==0x31) digitalWrite(led, HIGH);
     if (c==0x30) digitalWrite(led, LOW);
     
  }  
 }  
