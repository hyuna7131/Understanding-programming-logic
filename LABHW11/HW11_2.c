#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int i;

	for(i = 0; i <= 10; i++)
		printf("%d ^ %d == %d\n", 5, i, pow(5, i));
}

int pow(int a, int b)
{
	int i, mul = 1;
	for (i = 0; i < b; i++)
		mul = mul * a;
	return mul;
}