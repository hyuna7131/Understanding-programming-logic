#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int num;
	int score;
	int sum = 0;
	double average;

	printf("Enter a student number : ");
    scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		printf("Enter a score : ");
		scanf("%d", &score);
		sum += score;
		i++;
	}

	if (num == 0)
		average = 0;
	else
		average = (double)sum / num;

	printf("The total is %d \n", sum);
	printf("The average is %.1f \n", average);

	return 0;
}