#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[81];
	int i, length;

	printf("Enter a string: ");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++);
	length = i;
	printf("���̴� %d\n", length);

	for (i = 0; i < length; i++) // i�� length-1���� �ϳ��� ���鼭 �����ص� ��
		printf("%c\n", s[length-i-1]);
		
}