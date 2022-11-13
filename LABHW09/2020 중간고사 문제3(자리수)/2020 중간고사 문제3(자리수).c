#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, k = 0;

	scanf("%d", &n);

	while (n > 0) {
		k++;
		n /= 10;
	}
	printf("%d\n", k);
	
	return 0;
	
	/*
	int n, i, k = 0;

	scanf("%d", &n);

	while (n > 0) {
		n /= 10;
		k++;
	}
	printf("%d\n", k);

	return 0;
	*/
}