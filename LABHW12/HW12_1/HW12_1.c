#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score[20], i, j, k;

	printf("Enter the number of scores<<= 20>: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter a socre: ");
		scanf("%d", &score[i]);
	}
	
	for (j = 1; j <= num; j++)
	{
		printf("Student %2d: ", j);
		for (k = 1; k <= score[j]; k++)
			printf("*");

		printf("\n");
	}
	return 0;
}