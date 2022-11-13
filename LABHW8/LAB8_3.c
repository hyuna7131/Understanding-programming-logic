#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, i, even;

	printf("Enter the # of integers: ");
	scanf("%d", &n);

	even = 0;
	for (i = 1; i <= n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &m);
		if (m % 2 == 0)
			even++;
	}
	printf("The number of even number is %d\n", even);
}	
