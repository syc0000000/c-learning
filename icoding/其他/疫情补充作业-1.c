#include<stdio.h>
#include<math.h>
int main()
{
	//初始化
	double a = 0;
	double b = 0;
	double c = 0;
	double max = 0;
	double sum = 0;

	//输入
	printf("请输入三角形三边：");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	
	//判断最长边
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

	//计算输出
	if (max >= sum)
	{
		printf("不能构成三角形\n");
	}
	else
	{
		printf("可以构成三角形\n");
		double p = (a + b + c) / 2;
		double S = sqrt(p*(p - a)*(p - b)*(p - c));
		printf("面积为%f\n", S);
	}
	return 0;
}



