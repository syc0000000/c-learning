#include<stdio.h>
int main()
{
		//����
		int a, b, c;
		scanf_s("%d %d", &a, &b);
		//շת���
		c = a % b;
		while (c != 0)

		{
			a = b;
			b = c;
			c = a % b;
		}
		//�ж�
		if (b == 1)
		{
			printf("����");
		}
		else
		{
			printf("������");
		}
}