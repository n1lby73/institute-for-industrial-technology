int blue = 4 ;
int purple = 5;
int yellow = 6;
int orange = 7;
int count = 0;
int stepper_dt = 10;


void setup() {

  pinMode(blue, OUTPUT);
  pinMode(purple, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);
  Serial.begin(9600);
}

void loop() {




  digitalWrite(orange, LOW);
  digitalWrite(purple, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(blue, HIGH);

  delay(stepper_dt);


  digitalWrite(orange, LOW);
  digitalWrite(purple, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(blue, LOW);

  delay(stepper_dt);

  digitalWrite(orange, LOW);
  digitalWrite(purple, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(blue, LOW);

  delay(stepper_dt);


  digitalWrite(orange, HIGH);
  digitalWrite(purple, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(blue, LOW);


  delay(stepper_dt);


  count += 1;
  Serial.println("seen");

}
