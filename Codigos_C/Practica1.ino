/*
    UNIT MAKER BLOCK Practica 1: Encendido de LED con botón
    En esta practica aprenderás como encender el LED conectado al pin digital 13
    al pulsar el botón conectado al pin 5 de tu UNIT Maker Block
    Copyright (C) 2024  UNIT Electronics
*/

#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void setup() {
  pinMode(5,INPUT);     //Define el pin 5 como entrada
  pinMode(13,OUTPUT);   //Define el pin 13 como salida
  pinMode(8,OUTPUT);    //Define el pin 8 como salida
  pinMode(7,OUTPUT);    //Define el pin 7 como salida
}

void loop() {
    if(digitalRead(5) == 0) //Si la lectura del Pin digital 5 es igual a 0
    {
        digitalWrite(13,1); //Se enciende el LED conectado al Pin 13
    }
    //Si la lectura del pin digital 5 es diferente de 0
    digitalWrite(13,0);     //Se apaga el LED conectado al Pin 13
    digitalWrite(8,0);      //Se coloca el Pin 8 en estado bajo
    digitalWrite(7,0);      //Se coloca el pin 7 en estado bajo
}