#include <SoftwareSerial.h>
  
  SoftwareSerial BTSerial(3, 2); // SoftwareSerial(RX, TX)


//cnt1 ~ 14 Count for each button that checks digital signal 
//btn1 ~ 14 Value for each button
int cnt1, cnt2, cnt3, cnt4, cnt5, cnt6, cnt7, cnt8, cnt9, cnt10, cnt11, cnt12, cnt13, cnt14;
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

void setup(){
  BTSerial.begin(9600); 
  Serial.begin(9600); 
                                    //      D5  D6  D7  D8
  pinMode(A5, INPUT_PULLUP);        // A5 | 1 | 2 | 3 | 4 |
  pinMode(A4, INPUT_PULLUP);        // A4 | 5 | 6 | 7 | 8 |
  pinMode(A3, INPUT_PULLUP);        // A3 | 9 | 10| 11| 12|
  pinMode(A2, INPUT_PULLUP);        // A2 | X | 13| 14| X |
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
 
void loop(){
/////////////// 1st Column [1, 5, 9] ////////////////

  digitalWrite(5, LOW);
  
  if (!digitalRead(A5)) {

    cnt1++;
    
    if(cnt1 >= 4000){
      
      cnt1 = 0;
      BTSerial.println(btn1);
      Serial.println('1');
    }
  }

  if (!digitalRead(A4)){
    
    cnt5++;
    
    if(cnt5 >= 4000){
      
      cnt5 = 0;
      BTSerial.println(btn5);
      Serial.println('5');
    }
  }
  
  if (!digitalRead(A3)){
   
    cnt9++;
    
    if(cnt9 >= 4000){
      
      cnt9 = 0;
      BTSerial.println(btn9);
      Serial.println('9');
    }
  }
  digitalWrite(5, HIGH);

/////////////// 2nd Column [2, 6, 10, 13] ////////////////

  digitalWrite(6, LOW);
  
  if (!digitalRead(A5)) {

    cnt2++;
    
    if(cnt2 >= 4000){
      
      cnt2 = 0;
      BTSerial.println(btn2);
      Serial.println('2');
    }
  }

  if (!digitalRead(A4)){
    
    cnt6++;
    
    if(cnt6 >= 4000){
      
      cnt6 = 0;
      BTSerial.println(btn6);
      Serial.println('6');
    }
  }
  
  if (!digitalRead(A3)){
   
    cnt10++;
    
    if(cnt10 >= 4000){
      
      cnt10 = 0;
      BTSerial.println(btn10);
      Serial.println("10");
    }
  }

  if (!digitalRead(A2)){
   
    cnt13++;
    
    if(cnt13 >= 4000){
      
      cnt13 = 0;
      BTSerial.println(btn13);
      Serial.println("13");
    }
  }
  digitalWrite(6, HIGH);


/////////////// 3rd Column [3, 7, 11, 14] ////////////////

  digitalWrite(7, LOW);
  
  if (!digitalRead(A5)) {

    cnt3++;
    
    if(cnt3 >= 4000){
      
      cnt3 = 0;
      BTSerial.println(btn3);
      Serial.println('3');
    }
  }

  if (!digitalRead(A4)){
    
    cnt7++;
    
    if(cnt7 >= 4000){
      
      cnt7 = 0;
      BTSerial.println(btn7);
      Serial.println('7');
    }
  }
  
  if (!digitalRead(A3)){
   
    cnt11++;
    
    if(cnt11 >= 4000){
      
      cnt11 = 0;
      BTSerial.println(btn11);
      Serial.println('11');
    }
  }

  if (!digitalRead(A2)){
   
    cnt14++;
    
    if(cnt14 >= 4000){
      
      cnt14 = 0;
      BTSerial.println(btn14);
      Serial.println('14');
    }
  }
  digitalWrite(7, HIGH);

/////////////// 4th Column [4, 8, 12] ////////////////

  digitalWrite(7, LOW);
  
  if (!digitalRead(A5)) {

    cnt4++;
    
    if(cnt4 >= 4000){
      
      cnt4 = 0;
      BTSerial.println(btn4);
      Serial.println('4');
    }
  }

  if (!digitalRead(A4)){
    
    cnt8++;
    
    if(cnt8 >= 4000){
      
      cnt8 = 0;
      BTSerial.println(btn8);
      Serial.println('8');
    }
  }
  
  if (!digitalRead(A3)){
   
    cnt12++;
    
    if(cnt12 >= 4000){
      
      cnt12 = 0;
      BTSerial.println(btn12);
      Serial.println('12');
    }
  }
  digitalWrite(7, HIGH);
}
