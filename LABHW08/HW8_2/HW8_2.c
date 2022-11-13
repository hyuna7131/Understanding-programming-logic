#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	/*
	int n, m, i, max = INT_MIN, min = INT_MAX;

	printf("Enter the number of scores: ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("Enter a score: ");
			scanf("%d", &m);
			if (max < m)
				max = m;
			if (min > m)
				min = m;
		}
			printf("The best score is %d\n", max);
			printf("The worst score is %d\n", min);
	}
	else
		printf("no data.\n");
}
	*/

 //교수님이 제안한 이상적인 풀이
	int n, m, i, max = INT_MIN, min = INT_MAX;

	printf("Enter the number of scores: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		{
			printf("Enter a score: ");
			scanf("%d", &m);
			if (max < m)
				max = m;
			if (min > m)
				min = m;
		}

		if (n > 0)
	{
		printf("The best score is %d\n", max);
		printf("The worst score is %d\n", min);
	}
	else
		printf("no data.\n");
}

