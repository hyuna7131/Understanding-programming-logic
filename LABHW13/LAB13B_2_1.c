#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char str[100];

	printf("Enter one word: ");
	scanf("%s", str);

	for (i = 0; i < str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			printf("%c\n", str[i]);
	}
}