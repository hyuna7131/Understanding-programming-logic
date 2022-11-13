#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n;

	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = 0; i <  n; i++)
	{
		for (j = i; j <= n-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}