#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, sum, prime, i, j;

	scanf("%d %d", &m, &n);

	sum = 0;
	for (i = m; i <= n; i++)
	{
		prime = 1;                    // i �� �Ҽ��̳� �ƴϳ�
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

	/*������ ����
	int m, n, sum, i, j;

	scanf("%d %d", &m, &n);

	sum = 0;
	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i-1; j++)   // i�� ����ΰ�  2~(i-1)���� ���� �������°�
			if (i % j == 0)         //
				break;              //

		if (i ==j)
			sum += i;
	}
	printf("%d\n", sum);
	*/
}