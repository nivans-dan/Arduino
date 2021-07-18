#include "GFButton.h"
int BotonON = 2;
int BotonOFF = 3;

GFButton boton1(BotonON);
GFButton boton2(BotonOFF);
 
void setup() {
  pinMode(BotonON, INPUT);
  pinMode(BotonOFF, INPUT);
  boton1.setPressHandler(botonONpulsado);
  boton2.setPressHandler(botonOFFpulsado);
  Serial.begin(9600);
}
 
void loop() {
  boton1.process();
  boton2.process();
}
 
void botonONpulsado(GFButton & btn){
  Serial.print("ON_");
}
void botonOFFpulsado(GFButton & btn){
  Serial.print("OFF_");
}
