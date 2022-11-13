#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, prime;

	printf("Enter a number: ");
	scanf("%d", &n);

	prime = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}
	if (prime)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");
}