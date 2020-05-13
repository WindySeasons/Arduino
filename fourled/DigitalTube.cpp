#include"DigitalTube.h"
int A,B,C,D,E,F,G,DP,DIG1,DIG2,DIG3,DIG4;

void DigitalTube::setDigitalTube(int pin1,int pin2,int pin3,int pin4,int pin5, int pin6,int pin7,int pin8,int pin9,int pin10,int pin11, int pin12)  //1到12号引脚所对应到arduino上的GPIO口
                      {
                        pinMode(pin1,OUTPUT);E=pin1;//E
                        pinMode(pin2,OUTPUT);D=pin2;//D
                        pinMode(pin3,OUTPUT);DP=pin3;//DP
                        pinMode(pin4,OUTPUT);C=pin4;//C
                        pinMode(pin5,OUTPUT);G=pin5;//G
                        pinMode(pin6,OUTPUT);DIG4=pin6;//DIG4
                        pinMode(pin7,OUTPUT);B=pin7;//B
                        pinMode(pin8,OUTPUT);DIG3=pin8;//DIG3
                        pinMode(pin9,OUTPUT);DIG2=pin9;//DIG2
                        pinMode(pin10,OUTPUT);F=pin10;//F
                        pinMode(pin11,OUTPUT);A=pin11;//A
                        pinMode(pin12,OUTPUT);DIG1=pin12;//DIG1
                                               
                        }
  void DigitalTube::startDigitalTube(){
    int a,b,c,d;
        for(a=0;a<=5;a++)
          {for(b=0;b<=9;b++)
              {for(c=0;c<=5;c++)
                   {for(d=0;d<=9;d++)
                          {for(int i=0;i<=236;i++)
                               {displayall(a,b,c,d);
                                
                                
                                }
                            }
                    }
                
                }
            }
    }
  void DigitalTube::displayall(int a,int b,int c,int d)
                          {display(0);
                          number(a);
                          delay(1);
                          
                          display(1);
                          number(b);
                          delay(1);
                          
                          display(2);
                          number(c);
                          delay(1);
                          
                          display(3);
                          number(d);
                          delay(1);
                            
                            }//总共4/1000秒
void DigitalTube::display(int i){
  
                    if(i==0){
                      digitalWrite(DIG1,LOW);
                      digitalWrite(DIG2,HIGH);
                      digitalWrite(DIG3,HIGH);
                      digitalWrite(DIG4,HIGH);}
                      
                      if(i==1)
                      {  digitalWrite(DIG1,HIGH);
                      digitalWrite(DIG2,LOW);
                      digitalWrite(DIG3,HIGH);
                      digitalWrite(DIG4,HIGH);
                        }
                      if(i==2){
                      digitalWrite(DIG1,HIGH);
                      digitalWrite(DIG2,HIGH);
                      digitalWrite(DIG3,LOW);
                      digitalWrite(DIG4,HIGH);}
                      
                      if(i==3)
                      {  digitalWrite(DIG1,HIGH);
                      digitalWrite(DIG2,HIGH);
                      digitalWrite(DIG3,HIGH);
                      digitalWrite(DIG4,LOW);
                        }  
    }
   void DigitalTube::number(int i){
                      if(i==0){zero();}
                      if(i==1){one();}
                      if(i==2){two();}
                      if(i==3){three();}
                      if(i==4){four();}
                      if(i==5){five();}
                      if(i==6){six();}
                      if(i==7){seven();}
                      if(i==8){eight();}
                      if(i==9){nine();}
  }
 
void DigitalTube::one(){
                      digitalWrite(B,HIGH);
                      digitalWrite(C,HIGH);
                      
                       digitalWrite(A,LOW);
                      digitalWrite(D,LOW);
                       digitalWrite(E,LOW);
                      digitalWrite(F,LOW);
                       digitalWrite(G,LOW);
 }

  void DigitalTube::two(){
                        digitalWrite(A,HIGH);
                        digitalWrite(B,HIGH);
                        digitalWrite(G,HIGH);
                        digitalWrite(E,HIGH);
                        digitalWrite(D,HIGH);
                      
                          digitalWrite(C,LOW);
                         digitalWrite(F,LOW);
 }
  void DigitalTube::three(){
                          digitalWrite(A,HIGH);
                          digitalWrite(B,HIGH);
                            digitalWrite(G,HIGH);
                          digitalWrite(C,HIGH);
                           digitalWrite(D,HIGH);
                           
                               digitalWrite(E,LOW);
                           digitalWrite(F,LOW);}
  void DigitalTube::four(){
                             digitalWrite(B,HIGH);
                              digitalWrite(C,HIGH);
                                digitalWrite(F,HIGH);
                              digitalWrite(G,HIGH);
                              
                              digitalWrite(A,LOW);
                               digitalWrite(D,LOW);
                               digitalWrite(E,LOW);}
  void DigitalTube::five(){
                             digitalWrite(A,HIGH);
                              digitalWrite(C,HIGH);
                                digitalWrite(D,HIGH);
                              digitalWrite(F,HIGH);
                               digitalWrite(G,HIGH);
                            
                                  digitalWrite(B,LOW);
                               digitalWrite(E,LOW);
   }
  void DigitalTube::six(){
                              digitalWrite(A,HIGH);
                              digitalWrite(C,HIGH);
                               digitalWrite(D,HIGH);
                                digitalWrite(E,HIGH);
                              digitalWrite(F,HIGH);
                               digitalWrite(G,HIGH);
                               
                               digitalWrite(B,LOW);}
  void DigitalTube::seven(){
                                digitalWrite(A,HIGH);
                                digitalWrite(B,HIGH);
                                 digitalWrite(C,HIGH);
                              
                                     digitalWrite(D,LOW);
                                 digitalWrite(E,LOW);
                                     digitalWrite(F,LOW);
                                 digitalWrite(G,LOW);
   }
  void DigitalTube::eight(){
                                digitalWrite(B,HIGH);
                                 digitalWrite(A,HIGH);
                                digitalWrite(C,HIGH);
                                 digitalWrite(D,HIGH);
                                  digitalWrite(E,HIGH);
                                digitalWrite(F,HIGH);
                                 digitalWrite(G,HIGH);}
   void DigitalTube::nine(){
                                 digitalWrite(A,HIGH);
                                digitalWrite(B,HIGH);
                                 digitalWrite(C,HIGH);
                                digitalWrite(F,HIGH);
                                 digitalWrite(G,HIGH);
                                  digitalWrite(D,HIGH);
                                   
                                 digitalWrite(E,LOW);
   }
  void DigitalTube::zero(){
                                   digitalWrite(B,HIGH);
                                     digitalWrite(A,HIGH);
                                    digitalWrite(C,HIGH);
                                     digitalWrite(D,HIGH);
                                      digitalWrite(E,HIGH);
                                    digitalWrite(F,HIGH);
                                  
                                      digitalWrite(G,LOW);
  }                   
