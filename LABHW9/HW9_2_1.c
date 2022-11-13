#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{/*
	int score = 0, count = 0, total = 0, max = INT_MIN;
	double average = 0;

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	if (score != -1)
	{
		while (score != -1)
		{
			total += score;
			count++;
			average = total / (double)count;
			if (max < score)
			{
				max = score;
			}
			printf("Enter a score(-1 for exit): ");
			scanf("%d", &score);
		}
	
		printf("You've entered %d students.\n", count);
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", average);
		printf("The best score is %d.\n", max);
	}
	else
		printf("You've entered 0 students.\nThere is no data.\n");

	return 0;
	*/


	
	int total, n, best, score;
	double ave;

	total = 0;
	n = 0;
	best = -1;

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	while ( score != -1 )
	{
		total += score;
		if(score > best)
			best = score;
		n++;

		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}

	printf("You've entered %d students.\n", n);
	if( n ==0 )
		printf("There is no data.\n");
	else
	{
		ave = (double)total / n;
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", ave);
		printf("The best score is %d.\n", best);
	}

	return 0;

	
}