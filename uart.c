#include<pic.h>
char arr[6]="RISWAN";
char arrl[7]="MOHAMED";
delay()
{
for(int i=0;i<2500;i++);
}
void send_data(char data)
{
while(!TRMT);
TXREG=data;
delay();
}
void main()
{
int i=0;
TRISC6=0;
TRISC7=1;
TXSTA=0X26;
RCSTA=0X80;
SPBRG=25;
while(1)
{
for(i=0;i<6;i++)
send_data(arr[i]);
send_data(' ');
for(i=0;i<7;i++)
send_data(arrl[i]);
send_data(0X0D);
send_data(0X0A);
}
}