#include <Arduino.h>

int LED=2;
int botan=3;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(botan,INPUT);
}

void loop(){
if (digitalRead(botan)==HIGH){
  digitalWrite(LED,HIGH);
  }

else {
  digitalWrite(LED,LOW);
}
}
