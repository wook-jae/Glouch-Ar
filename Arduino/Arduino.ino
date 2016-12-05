#include <SoftwareSerial.h>
#include <Wire.h>
#include "Keypad/Keypad.h"
  SoftwareSerial BTSerial(3, 2); // SoftwareSerial(RX, TX)

const byte rows = 4; // four rows
const byte cols = 4; // four columns

char keys[rows][cols] = {

  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[rows] = {11, 10, 9, 8};
byte colPins[cols] = {7, 6, 5, 4};

String btn1 = "1";
String btn2 = "2";
String btn3 = "3";
String btn4 = "4";
String btn5 = "5";
String btn6 = "6";
String btn7 = "7";
String btn8 = "8";
String btn9 = "9";
String btn10 = "10";
String btn11 = "11";
String btn12 = "12";
String btn13 = "13";
String btn14 = "14";

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );

void setup(){
  BTSerial.begin(9600); 
  Serial.begin(9600); 
}
 
void loop(){
/////////////// 1st Column [1, 5, 9] ////////////////
  char key = kpd.getKey();

  if(key) { // check for a valid key

    switch(key){

      case '1':
      Serial.println("1");
      BTSerial.println(btn1);
      break;

      case '2':
      Serial.println("2");
      BTSerial.println("2");
      break;

      case '3':
      Serial.println("3");
      BTSerial.println("3");
      break;

      case 'A':
      Serial.println("4");
      BTSerial.println("4");
      break;

      case '4':
      Serial.println("5");
      BTSerial.println("5");
      break;

      case '5':
      Serial.println("6");
      BTSerial.println("6");
      break;

      case '6':
      Serial.println("7");
      BTSerial.println("7");
      break;

      case 'B':
      Serial.println("8");
      BTSerial.println("8");
      break;

      case '7':
      Serial.println("9");
      BTSerial.println("9");
      break;

      case '8':
      Serial.println("10");
      BTSerial.println("10");
      break;

      case '9':
      Serial.println("11");
      BTSerial.println("11");
      break;

      case 'C':
      Serial.println("12");
      BTSerial.println("12");
      break;

      case '*':
      Serial.println("*");
      BTSerial.println("*");
      break;

      case '0':
      Serial.println("13");
      BTSerial.println("13");
      break;

      case '#':
      Serial.println("14");
      BTSerial.println("14");
      break;

      case 'D':
      Serial.println("D");
      BTSerial.println("D");
      break;
    }
  }
}
