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
	printf("길이는 %d\n", length);

	for (i = 0; i < length; i++) // i를 length-1부터 하나씩 빼면서 진행해도 됨
		printf("%c\n", s[length-i-1]);
		
}