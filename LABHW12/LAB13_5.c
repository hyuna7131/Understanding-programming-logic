#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*int num, i, count = 0;
	int binary[256];

	printf("Enter 양수<<256>: ");
	scanf("%d", &num);

	for (i = 0; num > 0; i++) {
		binary[i] = num % 2;
		num /= 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	printf("\n");
	return 0;*/


	int rBinary[8], i, num, binary[8], j;

	printf("Enter 양수<<256>: ");
	scanf("%d", &num);

	i = 0;
	while(num > 0)
	{
		rBinary[i] = num % 2;
		num /= 2;
		i++;
	}

	for (j = 0; j < i; j++)                  
	{                                        
		binary[j] = rBinary[i - 1 - j];
		printf("%d", binary[j]);
	}
	printf("\n");


	/*
	int binary[8], i, k, num;

	printf("Enter 양수<<256>: ");
	scanf("%d", &num);

	i = 0;
	while(num > 0)
	{
		rBinary[i] = num % 2;
		num /= 2;
		i++;
	}

	for for(k=i-1; k >= 0; k--)                
		printf("%d", binary[k];
	printf("\n");
	*/
}
