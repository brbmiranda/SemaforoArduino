int LED = 10;
int LED2 = 11;
int LED3 = 12;

void setup(){
  pinMode(LED, OUTPUT);
}
void loop(){
  digitalWrite(LED, HIGH); // ALTO = LIGADO
  delay(1000); //1 segundo
  digitalWrite(LED, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
}
