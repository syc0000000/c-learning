//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
//
//	printf("Enter the first (single) digit:");
//	scanf("%1d", &d);
//
//	printf("Enter the first group of five digits:");
//	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//
//	printf("Enter the second group of five digits:");
//	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//
//	first_sum = d + i2 + i4 + j1 + j3 + j5;
//	second_sum = i1 + i3 + i5 + j2 + j4;
//	total = 3 * first_sum + second_sum;
//
//	int Check = 9 - (total - 1) % 10;
//	int check = 0;
//	printf("Enter the last (single) digit: ");
//	scanf("%d", &check);
//
//	if (check == Check)
//	{
//		printf("VALID");
//	}
//	else
//	{
//		printf("NOT VALID");
//	}
//
//	return 0;
//}