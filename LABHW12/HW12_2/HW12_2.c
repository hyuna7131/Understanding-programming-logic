#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	int num, i, j, avg, total=0, data[100];

	printf("Enter the number of random numbers:<<= 100>: ");
	scanf("%d", &num);

	for (i =0; i < num; i++) {
		data[i] = rand() % 100;

		total += data[i];
	}
	if (num == 0)
		printf("no data\n");
	else
		avg = total / num;
		printf("������ ����� %d\n", avg);

	printf("�߻��� ������\n");
	for (j = 0; j < num; j++) {
		printf("%5d", data[j]);

		if ((j + 1) % 5 == 0)   //or j % 5 == 4
			printf("\n");
	}

	return 0;
}