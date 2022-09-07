#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int day = 0;//天数
	printf("Enter number of days in month: ");
	scanf("%d", &day);

	int i = 0;//星期
	printf("Enter starting day of the week(1=Sun, 7=Sat): ");
	scanf("%d", &i);

	//开始构建日历
	printf("日\t一\t二\t三\t四\t五\t六\n");
	int d = 1;//日期
	switch (i)//第一行空格
	{
	case 1:break;
	case 2:
		printf("\t"); break;
	case 3:
		printf("\t\t"); break;
	case 4:
		printf("\t\t\t"); break;
	case 5:
		printf("\t\t\t\t"); break;
	case 6:
		printf("\t\t\t\t\t"); break;
	case 7:
		printf("\t\t\t\t\t\t"); break;
	default:break;
		break;
	}
	while (d<=day)//循环
	{
		while (i <= 7)//判定换行
		{
			printf("%d\t", d);
			i++;
			if (d == day)//判定结束
			{
				goto jieshu;
			}
			d++;
		}
		printf("\n");
		i = 1;
	}

jieshu:
	return 0;

}