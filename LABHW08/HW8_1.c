#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int count=0, n, m, i;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &m);
			if (m == n * i)
				count++;
	}
	printf("%d���� �����ܿ��� %d ���� �¾ҽ��ϴ�\n", n, count);
}