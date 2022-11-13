#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i, max, bestIndex, total = 0;
	double avg;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of the day %d: ", i+1);
		scanf("%d", &incomes[i]);
	}
	printf("--------------------------------------\n");
	max = incomes[0];
	for (i = 0; i < 7; i++)
	{
		if (max < incomes[i]) {
			max = incomes[i];
			bestIndex = i;
		}
	}
	printf("The best income: %d in days %d\n", max, bestIndex + 1);
	printf("--------------------------------------\n");
	for (i = 0; i < 7; i++) {
		total += incomes[i];
		
	}
	printf("The total is %d\n", total);
	avg = total / 7.0;
	printf("The average is %.1f\n", avg);
	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++) {
		if (incomes[i] > avg)
			printf("day %d: %d\n", i + 1, incomes[i]);
	}

	return 0;

}