//LAB6_3 ������ 20201704 ��ǻ���а� 3�г�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);
	
	if (grade == 'A')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("%d���̸� A�� �޴� ����.\n", score);
	}
	printf("");
}