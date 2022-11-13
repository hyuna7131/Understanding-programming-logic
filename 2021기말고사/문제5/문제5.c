#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int isHiddenPassword(char passwd[], char input[])
{
	int i, j;
	for (i = 0; input[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[i] == passwd[j])
				return 1;
			else 
				return 0;
		}
	}
}
*/
int isHiddenPassword(char passwd[], char input[])
{
	int i, j;
	i = j = 0;
	while (passwd[i] != '\0' && input[j] != '\0') {
		if (passwd[i] == input[j])
			i++;
		j++;
	}
	if (passwd[i] == '\0')
		return 1;
	else
		return 0;

}
int main(void)
{
	char passwd[20], input[20];
	int i;

	scanf("%s", passwd);
	for (i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

