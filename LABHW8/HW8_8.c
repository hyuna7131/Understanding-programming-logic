#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, prime;

	printf("Enter a number: ");
	scanf("%d", &n);

	prime = 1;
	for (i = 2; i < n; i++)
		if (n % i == 0)
		{
			prime = 0;
			break;
		}

	if (prime == 1) //if(prime) 이렇게도 씀(추천)
		printf("소수이다\n");
	else
		printf("소수가 아니다\n");

	/* flag 변수 없이
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i =2; i < n; i++)
		if(n % i == 0)
			break;

	if(n == i)
			printf("소수이다\n");
	else
		printf("소수가 아니다\n");
	*/
}