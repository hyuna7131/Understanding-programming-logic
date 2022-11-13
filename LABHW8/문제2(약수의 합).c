#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, sum, i;

	scanf("%d", &n);
	
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return 0;
}