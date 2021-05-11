// Write a program for blinking LED(s) at any GPIO pins of 8051 Microcontroller (AT89C51).
# include<reg51.h>
void delay();
void main()
{ 
while(1)
    {
          P0=0X01;
          delay();
          P0=0X02;
          delay();
          P0=0X04;
          delay(); 
          P0=0X08;
          delay();
          P0=0X10;
          delay();
          P0=0X20;
          delay();
          P0=0X40;
          delay();
          P0=0X80;
          delay();
    }
}
void delay()
{
    int i;
    for(i=0;i<=30000;i++);
}
