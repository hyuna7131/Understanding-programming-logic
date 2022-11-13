/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printHistogram(int n1, int n2);
int main(void)
{
	int num1, num2;
	printf("Tom's score? ");
	scanf("%d", &num1);
	printf("Mary's score? ");
	scanf("%d", &num2);
	printf("---------- Score Histogram ----------\n");

	printHistogram(num1, num2);
}
void printHistogram(int n1, int n2)
{
	int i, j;
	printf("Tom\t:");
	for (i = 0; i < n1; i++)
		printf("*");

	if( n1 < 10)
		printf("<0%d>\n", n1);
	else
		printf("<%d>\n", n1);

	printf("Mary\t:");
	for (j = 0; j < n2; j++)
		printf("*");

	if (n2 < 10)
		printf("<0%d>\n", n2);
	else
		printf("<%d>\n", n2);

	return;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printHistogram(int num);
int main(void)
{
	int Tscore, Mscore;
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
