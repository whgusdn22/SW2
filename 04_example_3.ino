#define PIN_LED  13

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
}

// L 이 깜빡이는 것이 목표기 때문에 L 부분만 살렸음.
// Serial.print() 가 있으면 TX가 문자를 Serial 모니터로 보내고 있어 깜빡임

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  delay(1000);
}
