#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	/*
	int i, result;

	result = 1;
	for (i = 1; i <= 30; i++)
	{
		result = i + (i + 1) + (i + 2) + (i + 3) + (i + 4);
		printf("%d - %d까지 합 = %d\n", i, i + 4, result);
		i += 4;
	}
	*/
	
	int i, sum;
	sum = 0;

	for (i = 1; i <= 30; i++)
	{
		sum += i;
		if (i % 5 == 0)
		{
			printf("%d - %d까지 합 = %d\n", i-4, i, sum);
			sum = 0;
		}
	}
	
}