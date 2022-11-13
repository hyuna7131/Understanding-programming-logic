#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findDivisor(int a);
int main(void)
{
	int n;
	printf("Enter a number:");
	scanf("%d", &n);

	findDivisor(n);
}
void findDivisor(int a)
{
	int i;
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
			printf("%d\n", i);
	}

	return;
}