#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, num, i = 0, sum=0;

	printf("Enter a student number: ");
	scanf("%d", &num);

	while (i < num)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		sum += score;
		i++;
	}
	printf("The total is %d\n", sum);
}