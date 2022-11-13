#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, sum = 0, mul = 1, i=1;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (i <= num)
	{
		sum += 3;
		mul *= 3;
		i++;
	}
	printf("3을 %d번 더한 값은 %d이다.\n", num, sum);
	printf("3을 %d번 곱한 값은 %d이다.\n", num, mul);
	return 0;
}