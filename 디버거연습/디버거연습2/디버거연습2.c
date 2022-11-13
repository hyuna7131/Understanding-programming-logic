#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int sum = 0;

	printf("Enter a number:");
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("%d\n", sum);
	return 0;
}