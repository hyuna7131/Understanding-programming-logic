#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	char word[81], newWord[81];

	printf("Enter one word: ");
	scanf("%s", word);
	j = 0;
	for (i = 0; i < word[i] != '\0'; i++)
	
		if (word[i] >= 65 && word[i] <= 90)
			newWord[j++] = word[i];
	
	newWord[j] = '\0';
	printf("%s\n", newWord);
}