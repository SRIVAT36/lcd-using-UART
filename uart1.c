//Transmitting usart data
#include<pic.h>
char a[6]="Riswan";
char b[11]="coimbatore";

void delay()
{
for(int i=0;i<250;i++);
}

void send_data(char data)
{
	while(!TRMT);
	TXREG=data;
	delay();
	}
	void main()
	{
		
		TRISC=0X06;
		TRISC=0X07;
		TXSTA=0X26;
		RCSTA=0X80;
		SPBRG=26;
		while(1)
		{
			for(int i=0;i<6;i++)
			send_data(a[i]);
			send_data(' ');
			for(int i=0;i<11;i++)
			send_data(b[i]);
			send_data(0x0d);
			send_data(0x0a);
			
			}
			}
	

