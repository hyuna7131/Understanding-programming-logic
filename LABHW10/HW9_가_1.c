#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");

		for (k = j; k <= n-1; k++)
			printf("*");

		printf("\n");
	}
}