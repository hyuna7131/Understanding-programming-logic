#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != -1)
	{
		printf("\n±æÀÌ´Â %d\n", get_cycle_number(num));

		printf("Enter a number: ");
		scanf("%d", &num);
	}
	return 0;
}
int get_cycle_number(int n)
{
	int count = 1;

	printf("%d ", n);
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		printf("%d ", n);
		count++;
	}
	
	return count;
}