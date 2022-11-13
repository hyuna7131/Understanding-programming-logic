#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, l, n;

	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = 0; i < n; i += 2)
	{
		for (j = 0; j < i; j+=2)
		{
			printf(" ");
		}
		for (k = 0; k < n-i; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}