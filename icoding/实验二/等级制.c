#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(viod)
{
	printf("Letter grade: F");
}
int main()
{
	//输入
	printf("Enter numerical grade: ");
	int grade = 0;
	scanf("%d", &grade);

	//判断是否合法
	if (grade < 0 || grade > 100)
	{
		printf("Error, grade must be between 0 and 100.");
	}
	else
	{
		//运算
		int ten = grade / 10;
		switch (ten)
		{
		case 0:
			f(); break;
		case 1:
			f(); break;
		case 2:
			f(); break;
		case 3:
			f(); break;
		case 4:
			f(); break;
		case 5:
			f(); break;
		case 6:
			printf("Letter grade: D"); break;
		case 7:
			printf("Letter grade: C"); break;
		case 8:
			printf("Letter grade: B"); break;
		case 9:
			printf("Letter grade: A"); break;
		case 10:
			printf("Letter grade: A"); break;

		default:
			printf("Error, grade must be between 0 and 100.");
			break;
		}
	}
}