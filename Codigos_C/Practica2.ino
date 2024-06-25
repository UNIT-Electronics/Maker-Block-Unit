/*
    UNIT MAKER BLOCK Practica 2: Encendido de LED con espera de 3
    En esta practica aprenderás como encender el LED conectado al pin digital 8
    durante 3 segundos, luego se apagara durante 1 segundo y volverá a encenderse
    durante 3 segundos. Esto se repetirá hasta que se apagues tu UNIT Maker Block
    Copyright (C) 2024  UNIT Electronics
*/

#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void setup() {
  pinMode(7,OUTPUT);    //Define el pin 7 como salida
  pinMode(8,OUTPUT);    //Define el pin 8 como salida
  digitalWrite(7,0);    //Coloca el pin 7 en estado bajo
}

void loop() {
    digitalWrite(8,1);  //Coloca el pin 8 en estado alto, por lo que el LED enciende
    delay(3000);        //Pausa de 3 segundos, por lo que el LED se mantiene encendido
    digitalWrite(8,0);  //Coloca el pin 8 en estado bajo, por lo que el LED apaga
    delay(1000);        //Pausa de 1 segundo, por lo que el LED se mantiene apagado
}
