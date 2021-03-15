#include <Streaming.h> //串聯函式                              //有順序
#include <MyTool.h> //""用於Arduino檔裡 <>用於libraries裡       //問題

//#define 進Program Files(x86)>Arduino>hardware>arduino>avr>cores>arduino
//#define COM_SPEED 9600
//定義     傳輸速度   9600 (不是變數)(0byte)
#define DEBUG//可像開關
//int (變數)(4byte)

void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
  

}

void loop() {
#ifdef DEBUG //if define 
  log("[INFO]",(String)"Pin 2: " + digitalRead(2) + ",Pin 3: " + digitalRead(3));
     //[WARNING]
     //[ERROR]
  //log指紀錄   
  //String將"Pin 2: " 轉型 +將字串 串聯起來
#endif
  delay(1000);
}     
