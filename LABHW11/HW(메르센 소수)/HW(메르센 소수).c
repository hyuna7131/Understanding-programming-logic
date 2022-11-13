#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long twoToThePower(long long n)
{
	int i;
	long long mul=1;

	for (i = 1; i <= n; i++)
		mul *= 2;

	return mul-1;

}

long long isPrime(long long x)
{
	long long i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;

}

int main(void)
{
	int num, i;
	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		if (isPrime(twoToThePower(i)))
			printf("(2^%d - 1) = %lld은 메르센 소수입니다.\n", i, twoToThePower(i));
		else
			continue;
	}
	
}