#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int num, i, score;
	int sum = 0;
	printf("Enter a student number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		sum = score + sum;

		i++;
	}
	printf("The total is %d\n", sum);
}