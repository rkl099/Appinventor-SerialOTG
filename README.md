New Appinventor extension that replaces Appinventor serial.
This extension uses an heavily updated version of PysicaloidLibrary that solves a number of issues and refactored so it can coexist with the built in function when using 
AI Companion.
It has been tested with the following adapters: PL2303, PL2303HX, (PL2303HXN not implemented yet), FTDI FT232, CP210x, CH341, CH341 (“fake”)
CdcAcm: Original Arduino Uno, Adafruit Feather_M0 and CLUE, Micro:bit, Teensy, OpenCR

Ver 1.0
"Serial" removed from method names. Functions have been added to control RTS, DTR, Parity, read/write bytes of any value, read/write ASCII hex coded data translated to bytes on the serial line and function to read and write byte lists-
A new function complement WriteLn (Prev PrintLn), ReadLn that collects data until a new-line char is received. This makes it simple to use ASCII messages communication. 
Available, Flush, DriverName added.

Ver 1.1 
Added some more boards

Ver 1.2
Upload of hex files to some Arduinos.
Added WIFI TCP server/client support. 
Added BT server/client support. 
Added isConnected() for BT, WIFI. 
Upload of hexfiles over BT possible. 
All read/write functions can be used with serial OTG, BT, WIFI. 

Content
Arduino BT, some notes on upload over BT.

ArduinoTime, how to use lline oriented communication.

SerialOTG.aia, .apk  Serial terminal that shows the use of differnet read/write functions.

SerialOTG_1.2.pdf  documentation of SerialOTG.

SerialOTG_BT_WIFI.aia .apk  How to use upload, serial, BT, WIFI with SerialOTG.

Time.ino  Arduino code for ArduinoTime app.

Led.ino Arduino code for display of led control. 

