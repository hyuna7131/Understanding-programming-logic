#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, num, i = 0, sum = 0;
	double average=0;

	printf("Enter a student number: ");
	scanf("%d", &num);

	while (i < num)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		sum += score;
		if (num >= 1)
			average = sum / (double)num;
		else
			average = 0;
		i++;
	}
	printf("The total is %d\n", sum);
	printf("THe average is %.1f\n", average);
}