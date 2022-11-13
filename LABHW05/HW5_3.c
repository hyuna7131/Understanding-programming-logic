//HW5_3 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double celsius, fahrenheit;
	const int BASE = 32;
	#define CONVERSION_FACTOR 9.0 / 5.0

	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);

	fahrenheit = celsius * CONVERSION_FACTOR + BASE;

	printf("Fahrenheit Equivalent : %f\n", fahrenheit);
}