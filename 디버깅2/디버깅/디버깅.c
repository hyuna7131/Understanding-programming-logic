//F10: 하나의 라인씩 이동
//F5: BP / 끝까지 이동
//F9: BP(Breaking Point) 설정/해제
//지역(local) 창에 변수 변화를 본다
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

	printf("평균은 %d\n", sum / n);
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}