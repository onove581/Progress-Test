#include <REGX51.H>

sbit BUTTON = P3^7;
sbit LED = P0;
void Delay (unsigned int time)
{
while(time--);
}

void main(void)
{
	unsigned char check = 0;
	while(1)
	{
	
		if(BUTTON == 0)
		{
			
			Delay(100);
		
			if(BUTTON == 0)
			{
		
				
				while(BUTTON == 0)
				{
					if(check==1) {
					
					P0=0xff;
					Delay(1000000);
					P1=0xff;
					Delay(1000000);
					P2=0xff;
					Delay(1000000);
					}
					else{ 
					P0=P1=P2=0;	Delay(100000);}
				}
				
				if(check==0) check=1;
				else check=0;
				
				
			}
		}
	}
}