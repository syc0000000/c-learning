#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int day = 0;//����
	printf("Enter number of days in month: ");
	scanf("%d", &day);

	int i = 0;//����
	printf("Enter starting day of the week(1=Sun, 7=Sat): ");
	scanf("%d", &i);

	//��ʼ��������
	printf("��\tһ\t��\t��\t��\t��\t��\n");
	int d = 1;//����
	switch (i)//��һ�пո�
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
	while (d<=day)//ѭ��
	{
		while (i <= 7)//�ж�����
		{
			printf("%d\t", d);
			i++;
			if (d == day)//�ж�����
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