#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int n;

	printf("Enter a number<-1 for exit>: ");
	scanf("%d", &n);

	while(n != -1 )
	{
		if (isPrime(n))
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");

		printf("Enter a number<-1 for exit>: ");
		scanf("%d", &n);
	}

	return 0;
}

int isPrime(int num)
{
	int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}