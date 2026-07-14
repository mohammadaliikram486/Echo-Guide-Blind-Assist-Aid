int trigPin = 12;
int echoPin = 11;
long pingTime;
int buzz = 9;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  pingTime = pulseIn(echoPin, HIGH);

  Serial.println(pingTime);

  if (pingTime <= 500) {
    analogWrite(buzz, 250);
    delay(200);
    analogWrite(buzz, 0);
  }
  else if (pingTime <= 1000) {
    analogWrite(buzz, 105);
    delay(200);
    analogWrite(buzz, 0);
  }
  else if (pingTime <= 2000) {
    analogWrite(buzz, 55);
    delay(200);
    analogWrite(buzz, 0);
  }
  else if (pingTime <= 3000) {
    analogWrite(buzz, 25);
    delay(200);
    analogWrite(buzz, 0);
  }
  else if (pingTime <= 4000) {
    analogWrite(buzz, 5);
    delay(200);
    analogWrite(buzz, 0);
  }
  else if (pingTime >= 4000) {
    analogWrite(buzz, 0);
  }
 

  delay(100);
}