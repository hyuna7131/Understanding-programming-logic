//LAB6_2 ������ 20201704 ��ǻ���а� 3�г�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int weight, height;

	printf("Enter your height: ");
	scanf("%d", &height);
	printf("Enter your weight: ");
	scanf("%d", &weight);

	if (height <= weight + 110)
		printf("You nedd a diet.\n");
	printf("BYE\n");
}