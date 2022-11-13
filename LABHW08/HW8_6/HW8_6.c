#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long result;
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
		printf("%d! = %lld\n", i, result);
	}
	


}