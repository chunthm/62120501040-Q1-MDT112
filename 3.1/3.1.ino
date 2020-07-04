const int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 400);
  delay(400);
  noTone(buzzer);
  delay(200);
  tone(buzzer, 400);
  delay(400);
  noTone(buzzer);
}

void loop() {}
