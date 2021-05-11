// Program to Control the Operation of Relay and Buzzer with a 8051 Microcontroller


#include<reg51.h>
void delay()
{
    int j;
    for(j=0;j<30000;j++);
}
void main()
{ 
      char k;
      while(1)
       { 
            P2=0x01;
            delay();
            for(k=0;k<7;k++)
             {
                P2=P2<<1;
                delay();
             }
       }
}
