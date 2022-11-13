#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, length = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++);
		length = i;

	for (i = 0; word[i] != '\0'; i++)
		newWord[length - i -1] = word[i];
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);
}


/* 두번째 for문
* j = 0;
for ( i = length -1; i >= 0 ; i++)
	newWord[j++] = word[i];
newWord[i] = '\0';
*/