// LEDのフェイドインとフェイドアウト

const int LED = 9; // LEDが接続されているピン
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // LEDのフェイドイン処理
  for (i = 0; i < 255; i++) {
    analogWrite(LED, i);
    delay(10);
  }

  // LEDのフェイドアウト処理
  for (i = 255; i > 0; i--) {
    analogWrite(LED, i);
    delay(10);
  }
}



