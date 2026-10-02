int LED=2;
int kankaku=1000;

void setup(){
  pinMode(LED,OUTPUT);
}

void loop(){
  digitalWrite(LED,HIGH);
  delay(kankaku);
  digitalWrite(LED,LOW);
  delay(kankaku);
}
