//LAB5_2 ������ 20201704 ��ǻ���а� 3�г�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch;
	int value;

	printf("Enter an alphabet: ");
	scanf("%c", &ch);

	printf("%c %d\n", ch, (int)ch);

	printf("Enter a ascii value: ");
	scanf("%d", &value);

	printf("%d %c\n", value, (char)value);

}