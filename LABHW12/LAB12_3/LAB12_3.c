#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i, max;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &incomes[i]);
	}
	printf("--------------------------------------\n");
	max = incomes[0];
	for (i = 0; i < 7; i++)
	{
		if (max < incomes[i])
			max = incomes[i];
	}
	printf("The best income is %d\n", max);
	
	printf("Incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);

	return 0;

}