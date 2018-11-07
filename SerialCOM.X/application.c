#include "system.h"
#include <xc.h>
//       --0---------1--------2--------3---
enum LEDS{estado1, estado2, estado3, estado4};
int estado;

int led1 = 15;
int led2 = 16;
int led3 = 17;
int led4 = 18;

int derecha = 19;
int izquierda = 20;

void setup(void)
{
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
    pinMode(izquierda,INPUT);
    pinMode(derecha,INPUT);
    estado = estado1;
    
}

void loop(void)
{
    switch(estado)
    {
        case estado1:
            digitalWrite(led1,HIGH);
            digitalWrite(led2,LOW);
            digitalWrite(led3,LOW);
            digitalWrite(led4,LOW);
            if(digitalRead(izquierda) == HIGH)
            {
                delay(100);
                if(digitalRead(izquierda) == HIGH)
                {
                    estado = estado2;
                }
            }
            if(digitalRead(derecha)== HIGH)
            {
                delay(100);
                if(digitalRead(derecha)== HIGH)
                {
                    estado = estado4;
                }
            }
            break;
        case estado2:
            digitalWrite(led1,LOW);
            digitalWrite(led2,HIGH);
            digitalWrite(led3,LOW);
            digitalWrite(led4,LOW);
            if(digitalRead(izquierda) == HIGH)
            {
                delay(100);
                if(digitalRead(izquierda) == HIGH)
                {
                    estado = estado3;
                }
            }
            if(digitalRead(derecha)== HIGH)
            {
                delay(100);
                if(digitalRead(derecha)== HIGH)
                {
                    estado = estado1;
                }
            }
            break;
        case estado3:
            digitalWrite(led1,LOW);
            digitalWrite(led2,LOW);
            digitalWrite(led3,HIGH);
            digitalWrite(led4,LOW);
            if(digitalRead(izquierda) == HIGH)
            {
                delay(100);
                if(digitalRead(izquierda) == HIGH)
                {
                    estado = estado4;
                }
            }
            if(digitalRead(derecha)== HIGH)
            {
                delay(100);
                if(digitalRead(derecha)== HIGH)
                {
                    estado = estado2;
                }
            }
            break;
        case estado4:
            digitalWrite(led1,LOW);
            digitalWrite(led2,LOW);
            digitalWrite(led3,LOW);
            digitalWrite(led4,HIGH);
            if(digitalRead(izquierda) == HIGH)
            {
                delay(100);
                if(digitalRead(izquierda) == HIGH)
                {
                    estado = estado1;
                }
            }
            if(digitalRead(derecha)== HIGH)
            {
                delay(100);
                if(digitalRead(derecha)== HIGH)
                {
                    estado = estado3;
                }
            }
            break;
    }
}

/*
 *Working:
 *  if(SerialAvailable())
    {
        for(int i=0;i<256;i++)
        {
            SerialWrite(i);
            delay(100);
            if(TxRegisterFull())
            {
                digitalWrite(20,HIGH);
            }
            else
            {
                digitalWrite(20,LOW);
            }
        }
    }
 */