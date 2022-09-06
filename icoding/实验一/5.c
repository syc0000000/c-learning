
#include<stdio.h>
int main() {
	//³õÊ¼»¯
	int m1 = 0, s1 = 0, m2 = 0, s2 = 0, s = 0, m = 0;

	//ÊäÈë
	printf("Enter two fractions separated by a plus sign:");
	scanf_s("%d/%d+%d/%d", &s1, &m1, &s2, &m2);

	//¼ÆËã
	s = s1 * m2 + s2 * m1;
	m = m1 * m2;

	//Êä³ö
	printf("The sum is %d/%d", s, m);

	return 0;

}
