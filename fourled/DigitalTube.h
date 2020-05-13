#ifndef _DIGITALTUBE_H_
#define _DIGITALTUBE_H_
#include<Arduino.h>
class DigitalTube{
  public:
  void startDigitalTube();
  void setDigitalTube(int pin1,int pin2,int pin3,int pin4,int pin5, int pin6,int pin7,int pin8,int pin9,int pin10,int pin11, int pin12);
                      
  private:
  void number(int i);void zero();void one();void two();void three();void four();void five();void six();void seven();void eight();void nine();
  void displayall(int a,int b,int c,int d); void display(int i);
  };
 #endif
