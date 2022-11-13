//HW5_2 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int radius;
	double area, circumference;
	const double pie = 3.141592;

	printf("Enter a radius: ");
	scanf("%d", &radius);

	area = radius * radius * pie;
	printf("The area of a circle with %d:\t%f\n", radius, area);

	circumference = radius * 2 * pie;
	printf("The circumference if a circle with %d: %f\n", radius, circumference);
}