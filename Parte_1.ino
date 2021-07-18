#include "GFButton.h"
 
int BotonON = 2;
int BotonOFF = 3;
GFButton boton1(BotonON);
GFButton boton2(BotonOFF);

void setup() {
  pinMode(BotonON, INPUT);
  pinMode(BotonOFF, INPUT);
  boton1.setPressHandler(botonON_pulsado);
  boton2.setPressHandler(botonOFF_pulsado);
  Serial.begin(9600);
}
 
void loop() {
  boton1.process();
  boton2.process();
}
 
void botonON_pulsado(GFButton & btn){
  Serial.print("LED1ON_");
}
void botonOFF_pulsado(GFButton & btn){
  Serial.print("LED1OFF_");
}
