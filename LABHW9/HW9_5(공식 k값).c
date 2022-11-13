#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	/*
	int i=1, n, k=0;

	printf("Enter a number:");
	scanf("%d", &n);

	while (i <= n) {
		k++;
		i = i * 2;
	}
	printf("%d\n", k-1);
	*/


	// ±³¼ö´Ô Ç®ÀÌ
	int n, k = 0, twoToK = 1;

	scanf("%d", &n);

	while (twoToK <= n)
	{
		twoToK *= 2;
		k++;
	}

	printf("%d\n", k-1);

	return 0;
	

}

