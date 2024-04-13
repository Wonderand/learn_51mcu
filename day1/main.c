#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	//P2=0x55; //1111 1110
	while(1)
	{
		P2=0xFE;
		Delay500ms();
		P2=0xFF;
		Delay500ms();
	}
}