#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i;
	scanf("%s %c", s, &key);

	for (i = 0; i < s[i] != '\0'; i++)
		if (s[i] == key)
			break;

	if (s[i] == '\0')
		printf("%d\n", -1);
	else
		printf("%d\n", i + 1);

	/*
	char s[20], key;
	int i;

	scanf("%s %c", s, &key);

	for (i = 0; i < s[i] != '\0'; i++)
	{
		if (s[i] == key)
		{
			printf("%d\n", i + 1);
			break;
		}
	}
	if (s[i] != key)
		printf("-1\n");
	*/
}