/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int starNum);
int main(void)
{
	int n;
	scanf("%d", &n);

	printManyStars(n);
}
void printManyStars(int starNum)
{
	int i;
	for (i = 0; i < starNum; i++)
		printf("*");

	if (starNum < 10)
		printf("<0%d>\n", starNum);
	else
		printf("<%d>\n", starNum);

	printf("\n");
	return;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printHistogram(int starNum);
int main(void)
{
	int i, Tscore, Mscore;

	printf("Tom's score? ");
	scanf("%d", &Tscore);
	printf("Mary's score? ");
	scanf("%d", &Mscore);

	printf("---------- Score Histogram ----------\n");
	printf("Tom\t:");
	printHistogram(Tscore);
	printf("<%02d>\n", Tscore);

	printf("Mary\t:");
	printHistogram(Mscore);
	printf("<%02d>\n", Mscore);
}
void printHistogram(int num)
{
	int i;
	for (i = 1; i <= num; i++)
		printf("*");
}