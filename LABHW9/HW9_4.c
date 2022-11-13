#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*
	int count = 1;
	int i, j;

	i = 2;
	do{
		for (j = 2; j <= i; j++){

			if (i == j) {
				printf("%d번째 소수는%d\n", count, i);
				count++;
			}
			if (i % j == 0 )
				break;
		}
		i++;
	}while (count <= 10);
	printf("\n");

	return 0;
	*/


	int primeCount = 1, j, num = 2; 

	while (primeCount <= 10)
	{
		j = 2;
		while (j <= num)
		{
			if (num == j)
			{
				printf("%d번째 소수는 %d\n", primeCount, num);
				primeCount++;
			}
			if (num % j == 0 )
				break;

			j++;
		}
		num++; // 다음 숫자
	}
}
