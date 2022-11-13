//LAB5_3 이현아 20201704 컴퓨터학과 3학년
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