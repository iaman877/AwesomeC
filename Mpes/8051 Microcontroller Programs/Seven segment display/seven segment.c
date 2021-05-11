//  Program to display counter of 0 to 9 on seven segment display connected to a 8051  Microcontroller (AT89C51).


#include<reg51.h>
char arr[10]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};
void delay(void);
void main(void)
{
  int a;
  for(a=0;a<10;a++)
    {
        P2=0x0f;
        P0=arr[a];
        delay();
    }
}
void delay(void)
{
    int f;
    for(f=0;f<30000;f++);
}
