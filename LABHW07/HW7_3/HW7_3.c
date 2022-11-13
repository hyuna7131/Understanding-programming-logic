#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, fac=1, i = 1;;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (i <= num)
	{
		fac *= i;
		i++;
	}
	printf("%d의 Factorial 값은 %d이다.\n", num, fac);
}