#include <neo-c.h>

//LED0.ino//


const uint8_t LED_PIN = 2;  // LED出力に使用するGPIO PIN番号

void setup() {
    //LED出力ピンを出力モードにする
    pinMode(LED_PIN, OUTPUT); 
}
    
void loop() {
   M5.update();
      
  if (M5.BtnA.wasPressed()) { //ボタンAが押されたら
      digitalWrite(LED_PIN, HIGH); //Hを出力
  } else if (M5.BtnB.wasPressed()) { //ボタンBが押されたら
      digitalWrite(LED_PIN, LOW);  //Lを出力
  }
}
