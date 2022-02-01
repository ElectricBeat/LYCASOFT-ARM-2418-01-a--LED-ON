#include <lpc21xx.h>

void delay_ms(unsigned int count)
{
  unsigned int j=0,i=0;
  for(j=0;j<count;j++)
  {
    for(i=0;i<333;i++);
  }
}

int main() 
{
    PINSEL0 = 0x00000000;			//Configure the P1 Pins for GPIO;
    IODIR0 = 0xffffffff;			//Configure the P1 pins as OUTPUT;

  while(1)
    {
       IOSET0 = 0xffffffff;		// Make all the Port pins as high  
         delay_ms(1000);

       IOCLR0 = 0xffffffff;		// Make all the Port pins as low  
         delay_ms(1000);
    }
}