#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, same  = 1;
	char word1[100], word2[100];

	printf("Enter the first word: ");
	scanf("%s", word1);
	printf("Enter the second word: ");
	scanf("%s", word2);

	for (i = 0; word1[i] != '\0' || word2[i] != '\0'; i++)
	{
		if (word1[i] == word2[i])
		{
			same = 0;
			break;
		}
	}
	
	if(same)
		printf("�� �ܾ�� ����.\n");
	else
		printf("�� �ܾ�� �ٸ���.\n");

	return 0;
}