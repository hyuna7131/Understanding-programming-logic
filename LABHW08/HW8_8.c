#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, prime;

	printf("Enter a number: ");
	scanf("%d", &n);

	prime = 1;
	for (i = 2; i < n; i++)
		if (n % i == 0)
		{
			prime = 0;
			break;
		}

	if (prime == 1) //if(prime) �̷��Ե� ��(��õ)
		printf("�Ҽ��̴�\n");
	else
		printf("�Ҽ��� �ƴϴ�\n");

	/* flag ���� ����
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i =2; i < n; i++)
		if(n % i == 0)
			break;

	if(n == i)
			printf("�Ҽ��̴�\n");
	else
		printf("�Ҽ��� �ƴϴ�\n");
	*/
}