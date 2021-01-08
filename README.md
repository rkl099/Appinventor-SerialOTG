New Appinventor extension that replaces Appinventor serial.
This extension uses an heavily updated version of PysicaloidLibrary that solves a number of issues and refactored so it can coexist with the built in function when using 
AI Companion.
It has been tested with the following adapters:CdcAcm (original Arduino Uno), PL2303, PL2303HX, (PL2303HXN not implemented yet), FTDI, CP210x, CH341, CH341 (“fake”)

"Serial" removed from method names. Functions have been added to control RTS, DTR, Parity, read/write bytes of any value, read/write ASCII hex coded data translated to bytes on the serial line and function to read and write byte lists-
A new function complement WriteLn (Prev PrintLn), ReadLn that collects data until a new-line char is received. This makes it simple to use ASCII messages communication. 

Some more functions:
Available, Flush, DriverName

Experimental:
Upload of hex files to some Arduinos.
