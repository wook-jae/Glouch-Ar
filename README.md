# Glouch-Arduino v1.0
[![Build Status](https://travis-ci.org/wook-jae/Glouch-Ar.svg?branch=master)](https://travis-ci.org/wook-jae/Glouch-Ar)

# WHAT IS THIS?
   여기에는 이 소스코드가 어떤 일을 하는지 씁니다.

# ON WHAT HARDWARE DOES IT RUN?
  Board  : nano
  Module : Bluetooth module - HC-05
           Touchpad module  - 4x4 Matrix Board

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
