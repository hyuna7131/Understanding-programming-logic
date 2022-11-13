//LAB5_2 이현아 20201704 컴퓨터학과 3학년
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