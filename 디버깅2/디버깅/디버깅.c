//F10: �ϳ��� ���ξ� �̵�
//F5: BP / ������ �̵�
//F9: BP(Breaking Point) ����/����
//����(local) â�� ���� ��ȭ�� ����
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int data[10];
	int i, sum = 0;
	int n;
	srand(time(NULL));

	printf("Enter the number of data:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		data[i] = rand() % 100;

	for (i = 0; i < n; i++)
		sum += data[i];

	printf("����� %d\n", sum / n);
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}