int timer = 100;

void setup() {

  for (int i = 2; i < 10; i++) {

    pinMode(i, OUTPUT);

  }

}

void loop() {

  for (int w = 2; w < 10; w++) {

    digitalWrite(w, HIGH);
    
    delay(timer);
    
    digitalWrite(w, LOW);

  }

  for (int j = 9; j > 1; j--) {

    digitalWrite(j, HIGH);
    
    delay(timer);
    
    digitalWrite(j, LOW);

  }

}
