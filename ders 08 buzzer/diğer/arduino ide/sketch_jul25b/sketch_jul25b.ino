/*
* LAB Name: Arduino (Passive Buzzer) Example
* Author: Khaled Magdy
* For More Info Visit: www.DeepBlueMbedded.com
*/
#define BUZZER_PIN  9
//#define BTN_PIN     7
 
int FrequencyArr[5] = {150, 350, 550, 750, 950};
int Idx = 0;
 
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
//  pinMode(BTN_PIN, INPUT_PULLUP);
}
 
void loop() {
 /* if(digitalRead(BTN_PIN))
  {
    noTone(BUZZER_PIN);
  }
  else*/
  {
    tone(BUZZER_PIN, FrequencyArr[Idx++]);
    delay(500);
    if(Idx == 5)
    {
      Idx = 0;
    }
  }
}