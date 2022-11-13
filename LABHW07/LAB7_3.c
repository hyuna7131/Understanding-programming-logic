#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i=1, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		printf("%d\n", i * i * i);
		i++;
	}
}
