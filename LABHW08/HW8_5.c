#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, result=1;

	printf("Enter a number (>=2): ");
	scanf("%d", &n);
	printf("%d! = ", n);
	
	for (i = n; i > 0; i--)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else
			printf("%d *", i);
		result *= i;
	}
	printf(" = %d\n", result);


	/*
	int n, i, result=1;

	printf("Enter a number (>=2): ");
	scanf("%d", &n);

	printf("%d! = ", n);

	for (i = n; i > 0; i--)
	{
		printf("%d *", i);
		result *= i;
	}
	printf(" = %d\n", result);
	*/
}