// : Program to Control the Operation of Relay and Buzzer with a 8051 Microcontroller

#include<reg51.h>
delay()
{
    int i;
    for(i=0;i<=6000;i++);//1000 fast///3000 medium//6000  slow
    }
void main()
{
    while(1)
      {
      P0=0x03;
      delay();
      P0=0x06;
      delay();
      P0=0x0c;
      delay();
      P0=0x09;
      delay();
      }
}
