#include<stdio.h>
#include<math.h>
int main()
{
	//��ʼ��
	double a = 0;
	double b = 0;
	double c = 0;
	double max = 0;
	double sum = 0;

	//����
	printf("���������������ߣ�");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	
	//�ж����
	if (a >= b)
	{
		if (a <= c)
		{
			max = c;
			sum = a + b;
		}
		else
		{
			max = a;
			sum = b + c;
		}
	}
	else
	{
		if (b <= c)
		{
			max = c;
			sum = a + b;
		}
		else
		{
			max = b;
			sum = a + c;
		}
	}

	//�������
	if (max >= sum)
	{
		printf("���ܹ���������\n");
	}
	else
	{
		printf("���Թ���������\n");
		double p = (a + b + c) / 2;
		double S = sqrt(p*(p - a)*(p - b)*(p - c));
		printf("���Ϊ%f\n", S);
	}
	return 0;
}



