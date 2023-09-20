#define PIN_LED  13

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  delay(1000);
}