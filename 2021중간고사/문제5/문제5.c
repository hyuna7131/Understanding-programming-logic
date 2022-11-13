#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a,b, num, digit, count=0;

	scanf("%d", &num);
	scanf("%d", &digit);

	a = num * 3;

	while (a > 0)
	{
		b = a % 10;
		if ( b == digit)
			count++;
		a /= 10;
	}
	printf("%d\n", count);
}