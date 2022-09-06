#include<stdio.h>
int main()
{
		//输入
		int a, b, c;
		scanf_s("%d %d", &a, &b);
		//辗转相除
		c = a % b;
		while (c != 0)

		{
			a = b;
			b = c;
			c = a % b;
		}
		//判断
		if (b == 1)
		{
			printf("互质");
		}
		else
		{
			printf("不互质");
		}
}