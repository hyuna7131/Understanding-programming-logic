#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, total = 0;
	char word[81];

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (word[i] >= '0' && word[i] <= '9')
			total += word[i] - '0';

	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", total);
}