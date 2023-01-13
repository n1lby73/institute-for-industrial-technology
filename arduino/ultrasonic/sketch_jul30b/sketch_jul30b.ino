float duration;
double distance;
#define trigpin 4
#define echopin 5

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

distance = pulseIn(echopin, HIGH);
duration = 0.0343*(distance/2);

Serial.print("The distance is: ");
Serial.println(distance);
delay(1500);
}
