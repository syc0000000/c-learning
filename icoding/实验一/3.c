/*
#include<stdio.h>

int main()
{
	double loan = 0, rate0 = 0, mon = 0, loan00 = 0;

	//��������
	printf("Enter amout of loan : ");
	scanf_s("%lf", &loan);
	printf("Enter interest rate: ");
	scanf_s("%lf", &rate0);
	printf("Enter monthly payment: ");
	scanf_s("%lf", &mon);

	//ת��rate
	double rate = 0;
	rate = rate0 * 0.01/12;

	//��һ����
	loan00= loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after first payment: $%.2lf\n", loan);

	//�ڶ�����
	
	loan00 = loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after second payment: $%.2lf\n", loan);

	//��������
	
	loan00 = loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after third payment: $%.2lf\n", loan);


}
*/