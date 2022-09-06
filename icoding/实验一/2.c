#include<stdio.h>

int main()
{
	int amount = 0.00;

	printf("Enter a dollar amount: ");
	scanf_s("%d", &amount);

	int a20, a10, a5, a1, yue;
	a20 = amount / 20;
	yue = amount % 20;
	a10 = yue / 10;
	yue = yue % 10;
	a5 = yue / 5;
	a1 = yue % 5;

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", a20, a10, a5, a1);
	
	return 0;

}

