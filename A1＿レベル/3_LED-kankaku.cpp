int LED=2;
int kankaku=5000;

void setup(){
  pinMode(LED,OUTPUT);
}

void loop(){
  digitalWrite(LED,HIGH);
  delay(kankaku-1000);
  digitalWrite(LED,LOW);
  delay(kankaku-2000);
}
