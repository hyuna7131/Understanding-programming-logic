//LAB6_4 ������ 20201704 ��ǻ���а� 3�г�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter a student grade(A or F): ");
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score: ");
		scanf("%d", &score);
		printf("������ %d�̸� ���� ������ �´±���. ��� �������ؿ�.\n", score);
	}
	else
	{
		printf("Enter your BAD score: ");
		scanf("%d", &score);
		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}
}