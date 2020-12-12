
/* 
  Program to illiustrate the use of ascii messages communication with AppInventor
*/
 


void setup() {
   Serial.begin(9600); 
}


long init_ms,ms,sec,minute,hour;

void loop() {
     delay(1000);
     
     // Get message
     while (Serial.available() > 0) {
           hour=Serial.parseInt();
           minute=Serial.parseInt();
           sec=Serial.parseInt();
           if (Serial.read()==0x0A); {   //n
               init_ms=(hour*3600+minute*60+sec)*1000-millis();                
           }
     }

     // Calculate and print time
     ms=init_ms+millis();
     sec=ms/1000;
     hour=sec/3600;
     sec=sec-hour*3600;
     minute=sec/60;
     sec=sec-minute*60;
          
     Serial.print(hour);
     Serial.print(".");
     Serial.print(minute);
     Serial.print(".");
     Serial.print(sec);
     Serial.print(":");
     Serial.print(ms%1000);
     Serial.print("\n");
    
}
