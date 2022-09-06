#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0, i = 1, i2 = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	while (i2 <= num)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i2);
		}
		i++;
		i2 = i * i;
	}
}