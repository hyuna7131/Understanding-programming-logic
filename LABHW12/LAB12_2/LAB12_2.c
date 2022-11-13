#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, k, data[100], total=0, average;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		data[i] = rand() % 100;

	for (k = 0; k < 10; k++)
	{
		total += data[k];
		average = total / 10;
	}
	printf("Æò±ÕÀº %d\n", average);

	for (j = 0; j < 10; j++)
		printf("%d ", data[j]);

	printf("\n");
	return 0;
}