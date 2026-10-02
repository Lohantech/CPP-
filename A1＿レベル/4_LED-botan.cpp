int LED=2;
int botan=3;
int kankaku=5000;
int botan_zero=0;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(botan,INPUT);
}

void loop(){
botan_zero=botan;
if (digitalRead(botan_zero)==HIGH){
  digitalWrite(LED,HIGH);
  delay(kankaku-1000);
  digitalWrite(LED,LOW);
  delay(kankaku-2000);
  }

else {
  digitalWrite(LED,LOW);
}
}