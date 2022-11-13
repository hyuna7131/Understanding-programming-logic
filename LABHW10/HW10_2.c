#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);
}
void findNPrintBiggest(int a, int b, int c)
{
	int big;

	if (a >= b)
		big = a;
	else
		big = b;

	if (big < c)
		c = big;

	printf("The biggest number is %d.\n", big);
	return;
}

/*
int biggest;
if (a >= b)
	if(a >= c )
		biggest = a;
	else
		biggest = b;
if (a < b)
	if(b >= c)
		biggest = b;
	else
		biggest = c;
*/