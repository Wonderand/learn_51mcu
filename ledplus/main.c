#include <REGX52.H>
void Delay(unsigned int xms)
{
	unsigned char i,j;
	while (xms)
	{
		i = 2;
		j = 239;
		do
		{
			while(--j);
		} while(--i);
		xms--;
	}
}	

void main()
{
	while(1)
	{
		P2 = 0xfe;
		Delay(100);
		P2 = 0xfd;
		Delay(100);
		P2 = 0xfb;
		Delay(100);
		P2 = 0xf7;
		Delay(100);

		P2 = 0xef;
		Delay(100);
		P2 = 0xdf;
		Delay(100);
		P2 = 0xbf;
		Delay(100);
		P2 = 0x7f;
		Delay(100);
	}	
}	