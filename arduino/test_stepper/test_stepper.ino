int blue = 4 ;
int purple = 5;
int yellow = 6;
int orange = 7;
int stepper_dt = 5;
int dt = 1000;
int car_count;
int car_space_left = 20;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue, OUTPUT);
  pinMode(purple, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(orange, HIGH);
    digitalWrite(purple, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);

    delay(stepper_dt);

    digitalWrite(orange, LOW);
    digitalWrite(purple, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);

    delay(stepper_dt);

    digitalWrite(orange, LOW);
    digitalWrite(purple, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, LOW);

    delay(stepper_dt);

    digitalWrite(orange, LOW);
    digitalWrite(purple, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, HIGH);

    delay(stepper_dt);

}
