#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	printf("word given: %s\n", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			newWord[i] = word[i] + 32;
		else if (word[i] >= 'a' && word[i] <= 'z')
			newWord[i] = word[i] - 32;
		else
			newWord[i] = word[i];
	}
	newWord[i] = '\0';

	printf("new word: %s\n", newWord);

}