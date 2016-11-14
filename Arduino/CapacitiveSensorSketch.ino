#include <CapacitiveSensor.h>

/* 10M 정도의 높은 저항 사용 권장
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */

// 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_4_5 = CapacitiveSensor(4, 5);        // Touch Pad Row1
CapacitiveSensor   cs_4_6 = CapacitiveSensor(4, 6);        // Touch Pad Row2
CapacitiveSensor   cs_4_7 = CapacitiveSensor(4, 7);        // Touch Pad Row3
CapacitiveSensor   cs_4_8 = CapacitiveSensor(4, 8);        // Touch Pad Row4

void setup()                    
{
  /*
   cs_4_5.set_CS_AutocaL_Millis(30);     // turn off autocalibrate on channel 1 - just as an example
   cs_4_6.set_CS_AutocaL_Millis(30);
   cs_4_7.set_CS_AutocaL_Millis(30);
   cs_4_8.set_CS_AutocaL_Millis(30);
   */
   
   Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long touchRow1 =  cs_4_5.capacitiveSensor(30);
    long touchRow2 =  cs_4_6.capacitiveSensor(30);
    long touchRow3 =  cs_4_7.capacitiveSensor(30);
    long touchRow4 =  cs_4_8.capacitiveSensor(30);
   
    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing 
    Serial.print(touchRow1); Serial.print("\t"); Serial.print(touchRow2); Serial.print("\t"); Serial.print(touchRow3); Serial.print("\t"); Serial.println(touchRow4);
    
    delay(10);                             // arbitrary delay to limit data to serial port 
}
