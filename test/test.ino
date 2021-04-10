//全域變數 不可重複變數
int blinkDelayTime = 1000;//名字長好辨認

void setup() {
  //區域變數 可重複
  pinMode(13,OUTPUT);
}

void loop() {
  //區域變數 可重複
  blink(13,2000,1000);
  int blinkDelayTime = 100;
}


void blink(int pin,int blinkDelayTime,int lowBlinkDelayTime){//變數名稱隨便取，重點是要看得懂、不會搞混
  digitalWrite(pin, HIGH);
  delay(blinkDelayTime);
  digitalWrite(pin, LOW);
  delay(lowBlinkDelayTime);
}
