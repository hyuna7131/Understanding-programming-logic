#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, i, j;

	printf("Enter the number of rows: ");
	scanf("%d", &n);
	printf("Enter the number of colums: ");
	scanf("%d", &m);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("*");
		printf("\n");
	}
}