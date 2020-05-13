#include"DigitalTube.h"

DigitalTube myDigitalTube;
void setup() {
  // put your setup code here, to run once:
  DigitalTube myDigitalTube;
  myDigitalTube.setDigitalTube(4,2,5,3,6,10,13,11,9,7,12,8);//引脚1-12所对应的GPIO口
}

void loop() {
  // put your main code here, to run repeatedly:
    myDigitalTube.startDigitalTube();
}

