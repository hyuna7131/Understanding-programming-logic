#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num)
{
	int i;
	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}
int main(void)
{
	int n;
	int total = 0;

	scanf("%d", &n);

	while (n != -1) {
		if (isPrime(n))
			total += n;
		scanf("%d", &n);
	}
	printf("%d\n", total);
}
/*
int main(void)
{
	int i, sum=0, num;

	scanf("%d", &num);

	while (num != -1)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
				break;
		}
		if (num == i)
			sum += i;
		scanf("%d", &num); 
	}
	printf("%d\n", sum);
}
*/
