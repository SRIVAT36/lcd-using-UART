#include<pic.h>
#include"lcd.h"
char temp=0;
void interrupt serial(void)
{
	if(RCIF)
	{
		RCIF=0;
temp=RCREG;
		lcd_data(temp);
		}
		}
		void main()
		{
			initilaize();
			
		TRISC6=0X00; //intializing for USART reception
		TRISC7=1;
		TXSTA=0X26;
		RCSTA=0X90;
		SPBRG=25;
		
		GIE=1; //inializing for interrupt
		PEIE=1;
		RCIE=1;
		
		while(1); //waiting for receiving
		}