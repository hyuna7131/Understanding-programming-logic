#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 1, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (i <= num)
	{
		if( i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
		i++;
	}

}