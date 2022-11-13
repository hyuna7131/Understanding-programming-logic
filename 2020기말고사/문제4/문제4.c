#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_in(char w[], char ch);

int main()
{
	char word[20];
	int i;

	scanf("%s", word);

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (is_in(word, i) == 0)
			printf("%c", i);
	}
}
int is_in(char w[], char ch)
{
	for (int i = 0; w[i] != '\0'; i++)
	{
		if (w[i] == ch)
			return 1;
	}
	return 0;
}

/*
int main(void)
{
	int i, j, found;
	char word[21];
	char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	scanf("%s", word);

	for (i = 0; i < 26; i++)
	{
		found = 1;
		for (j = 0; j < word[j] !='\0'; j++)  //word[j] !='\0'  == 21
		{
			if (ch[i] == word[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			printf("%c", ch[i]);
	}
}
*/