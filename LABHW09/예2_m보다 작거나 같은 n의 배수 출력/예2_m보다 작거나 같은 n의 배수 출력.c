#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, product;

	printf("Enter two numbers: ");
	scanf("%d %d", &n, &m);

	product = 1;

	while (product <= m) {
		printf("%d ", product);
		product *= n;
	}

	return 0;
}