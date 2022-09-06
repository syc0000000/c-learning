#include<stdio.h>

int main()
{
	double loan = 0, rate0 = 0, mon = 0, loan00 = 0;

	//输入数据
	printf("Enter amout of loan : ");
	scanf_s("%lf", &loan);
	printf("Enter interest rate: ");
	scanf_s("%lf", &rate0);
	printf("Enter monthly payment: ");
	scanf_s("%lf", &mon);

	//转化rate
	double rate = 0;
	rate = rate0 * 0.01/12;

	//第一个月
	loan00= loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after first payment: $%.2lf\n", loan);

	//第二个月
	
	loan00 = loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after second payment: $%.2lf\n", loan);

	//第三个月
	
	loan00 = loan - mon;
	loan = loan00 + loan * rate;
	printf("Balance remaining after third payment: $%.2lf\n", loan);


}
