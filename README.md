# Glouch-Arduino v1.0
[![Build Status](https://travis-ci.org/wook-jae/Glouch-Ar.svg?branch=master)](https://travis-ci.org/wook-jae/Glouch-Ar)

# WHAT IS THIS?
   This is the code which is running above arduino board.<br></br>
   Through using the code arduino board communicates(bluetooth) with andriod app.<br></br>

# ON WHAT HARDWARE DOES IT RUN?
  Board  : nano<br></br>
  Module : Bluetooth module - HC-05<br></br>
           Touchpad module  - 4x4 Matrix Board<br></br> 

# DOCUMENTATION:
   

# INSTALLING the source:
   1. Install Arduino IDE from https://www.arduino.cc/en/Main/Software
   2. Download Arduino directory's contents that includes keyPad libraries and Arduino main .ino file
   3. Excute Arduino.ino file then other files and directories will be created automatically.
   4. Make keyPad directory and locate it on ---/users/'username'/Documents/Arduino/libraries
   
# SOFTWARE REQUIREMENTS:
   1. The project is built with keyPad library from http://playground.arduino.cc/Code/Keypad  
   2. Additionally the project is built with default library - SoftwareSerial.h, Wire.h

# CONFIGURING:
   1. After run the Arduino.ino file, select [tool] - [board : "Arduino Nano"] menu and [tool] - [port : 'appropriate port']
    
# COMPILING:
   1. Select [sketch] - [configure/compile]
   2. If the compiling is success, select [sketch] - [upload] then, the code will be running above your board.
