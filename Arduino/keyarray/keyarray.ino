#include <SoftwareSerial.h>
#include <Wire.h>
#include <Keypad.h>
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
      BTSerial.println("1");
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
      Serial.println("A");
      BTSerial.println("A");
      break;

      case '4':
      Serial.println("4");
      BTSerial.println("4");
      break;

      case '5':
      Serial.println("5");
      BTSerial.println("5");
      break;

      case '6':
      Serial.println("6");
      BTSerial.println("6");
      break;

      case 'B':
      Serial.println("B");
      BTSerial.println("B");
      break;

      case '7':
      Serial.println("7");
      BTSerial.println("7");
      break;

      case '8':
      Serial.println("8");
      BTSerial.println("8");
      break;

      case '9':
      Serial.println("9");
      BTSerial.println("9");
      break;

      case 'C':
      Serial.println("C");
      BTSerial.println("C");
      break;

      case '*':
      Serial.println("*");
      BTSerial.println("*");
      break;

      case '0':
      Serial.println("0");
      BTSerial.println("0");
      break;

      case '#':
      Serial.println("#");
      BTSerial.println("#");
      break;

      case 'D':
      Serial.println("D");
      BTSerial.println("D");
      break;
    }
  }
}
