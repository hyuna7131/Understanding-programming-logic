#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSumMToN(int m1, int n1);
int main(void)
{
	int m, n;

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	printSumMToN(m, n);
}
void printSumMToN(int m1, int n1)
{
	int i, sum=0;
	printf("%d~ %d¿« «’: ", m1, n1);

	for (i = m1; i <= n1; i++)
		sum += i;
	printf("%d\n", sum);
		
	return;
}