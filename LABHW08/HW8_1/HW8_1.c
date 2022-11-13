#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int count=0, n, m, i;

	printf("몇 단을 연습하시겠습니까?: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &m);
			if (m == n * i)
				count++;
	}
	printf("%d단의 구구단에서 %d 개를 맞았습니다\n", n, count);
}