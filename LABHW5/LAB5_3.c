//LAB5_3 ������ 20201704 ��ǻ���а� 3�г�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int radius;
	double area;
	const double pie = 3.141592;

	printf("Enter a radius: ");
	scanf("%d", &radius);

	area = radius * radius * pie;
	printf("The area of a circle with %d:\t%f\n", radius, area);

}