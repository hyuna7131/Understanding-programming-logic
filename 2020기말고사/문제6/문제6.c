#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strLength(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++);
	return i;
}

int makePalindrome(char s[])
{
	int i;
	int len, count = 0;

	len = strLength(s);
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			s[len - i - 1] = s[i];
			count++;
		}
	}
	return count;
}

int main(void)
{
	char s[30];

	scanf("%s", s);
	printf("%d ", makePalindrome(s));
	printf("%s", s);
}
