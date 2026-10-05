int ledred = 2;
int ledgreen = 3;
int ledblue = 4;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(ledred, HIGH);
  delay(1000);
  digitalWrite(ledred, LOW);
  delay(1000);

  digitalWrite(ledgreen, HIGH);
  delay(1000);
  digitalWrite(ledgreen, LOW);
  delay(1000);

  digitalWrite(ledblue, HIGH);
  delay(1000);
  digitalWrite(ledblue, LOW);
  delay(1000);
}
