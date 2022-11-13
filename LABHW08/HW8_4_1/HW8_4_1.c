#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, num=1;

	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j += 2)
		{
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
}