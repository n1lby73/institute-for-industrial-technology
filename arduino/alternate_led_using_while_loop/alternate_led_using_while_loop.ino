int timer = 1000;

void setup() {

  for (int i = 2; i < 6; i++) {

    pinMode(i, OUTPUT);

  }

}

void loop() {
  int q = 7;
  for (int w = 2; ((w < 6) && (q > 1)); w++) {

    digitalWrite(w, HIGH);
    digitalWrite(q, HIGH);
    delay(timer);
    digitalWrite(w, LOW);
    digitalWrite(q, LOW);
    delay(timer);

    q--;
  }

}
