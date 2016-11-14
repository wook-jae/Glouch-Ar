#include <SoftwareSerial.h> // 블루투스 통신을 위한 SoftwareSerial 라이브러리를 불러온다.
#include <CapacitiveSensor.h>

SoftwareSerial BTSerial(2, 3); // SoftwareSerial(RX, TX)
byte buffer[1024]; // 데이터를 수신 받을 버퍼
int bufferPosition; // 버퍼에 데이타를 저장할 때 기록할 위치
boolean temp = 0;

CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_4_6 = CapacitiveSensor(4,6);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil
CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil
  
void setup(){
  BTSerial.begin(9600); 
  Serial.begin(9600); 
  pinMode(13, OUTPUT);
  bufferPosition = 0; // 버퍼 위치 초기화

  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
}

void loop(){
  if (BTSerial.available()){ // 블루투스로 데이터 수신
    byte data = BTSerial.read(); // 수신 받은 데이터 저장
    Serial.write(data); // 수신된 데이터 시리얼 모니터로 출력
    buffer[bufferPosition++] = data; // 수신 받은 데이터를 버퍼에 저장
  
    if(data == '1'){  // 블루투스를 통해 '1' 이 들어오면
      if(temp == 0){  // LED가 꺼있을 경우 LED를 켭니다.
        digitalWrite(13, HIGH);
        temp = 1;
      }else{          // LED가 켜져있을 경우 LED를 끕니다.
        digitalWrite(13, LOW);
        temp = 0;
      }
    }
      
    if(data == '\n'){ // 문자열 종료 표시
      buffer[bufferPosition] = '\0';
      bufferPosition = 0;
    }  

    long start = millis();
    long total1 =  cs_4_2.capacitiveSensor(30);

    long total2 =  cs_4_6.capacitiveSensor(30);
/*
    long total3 =  cs_4_8.capacitiveSensor(30);
  */
    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing
    Serial.print(total1);                  // print sensor output 1
    Serial.print("\t");
 
    Serial.println(total2);                  // print sensor output 2
 /*
    Serial.print("\t");
    Serial.println(total3);                // print sensor output 3
  */
    delay(10);                             // arbitrary delay to limit data to serial port 
  }
}
