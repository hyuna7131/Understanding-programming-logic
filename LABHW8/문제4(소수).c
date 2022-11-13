#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, sum, prime, i, j;

	scanf("%d %d", &m, &n);

	sum = 0;
	for (i = m; i <= n; i++)
	{
		prime = 1;                    // i 가 소수이냐 아니냐
		for (j = 2; j < i; j++)       //
		{                             //
			if (i % j == 0)           //
			{                         //
				prime = 0;            //
				break;                //
			}                         //
		}                             //
		if (prime)
			sum += i;
	}
	printf("%d\n", sum);

	return 0;

	/*위에가 나음
	int m, n, sum, i, j;

	scanf("%d %d", &m, &n);

	sum = 0;
	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i-1; j++)   // i가 약수인가  2~(i-1)까지 수로 나눠지는가
			if (i % j == 0)         //
				break;              //

		if (i ==j)
			sum += i;
	}
	printf("%d\n", sum);
	*/
}