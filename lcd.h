
void lcd_delay();
void lcd_command(unsigned char);
void lcd_data(unsigned char);
initilaize()
{
	TRISB=0X00;
	TRISE=0X00;
	PORTB=0X00;
	PORTE=0X00;
	PORTC=0X00;
	TRISC=0XF8;
	ADCON1=0X06;
	lcd_command(0X01);
	lcd_delay();
	lcd_command(0X0C);
	lcd_delay();
	lcd_command(0X06);
	lcd_delay();
	lcd_command(0X38);
	lcd_delay();
	lcd_command(0X80);
	lcd_delay();
	
	}
	void lcd_command(unsigned char cmd)
	{
		PORTE=0X04;
		PORTB=cmd;
		lcd_delay();
		RE2=0;
		}
		void lcd_data(const char dat)
		{
			PORTE=0X05;
			PORTB=dat;	
			lcd_delay();
			RE2=0;
			}
			
			void lcd_delay()
{
for(int i=0;i<2500;i++);
}
	 
