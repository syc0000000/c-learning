#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char zifu;
	zifu = 0;
	while (zifu != '\n')
	{
		zifu = getchar();
		if (zifu == 'A' || zifu == 'B' || zifu == 'C')
		{
			putchar('2');
		}
		else if (zifu == 'D' || zifu == 'E' || zifu == 'F')
		{
			putchar('3');
		}
		else if (zifu == 'G' || zifu == 'H' || zifu == 'I')
		{
			putchar('4');
		}
		else if (zifu == 'J' || zifu == 'K' || zifu == 'L')
		{
			putchar('5');
		}
		else if (zifu == 'M' || zifu == 'N' || zifu == 'O')
		{
			putchar('6');
		}
		else if (zifu == 'P' || zifu == 'Q' || zifu == 'R' || zifu == 'S')
		{
			putchar('7');
		}
		else if (zifu == 'T' || zifu == 'U' || zifu == 'V')
		{
			putchar('8');
		}
		else if (zifu == 'W' || zifu == 'X' || zifu == 'Y' || zifu == 'Z')
		{
			putchar('9');
		}
		else
		{
			putchar(zifu);
		}
	}
	
}