#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printUpperCase(char s[]);
int strLength(char s[]);
int main(void)
{
	char str[81];
	printf("Enter a string:");
	scanf("%s", str);

	printf("���̴� %d\n", strLength(str)); // strLength ȣ��

	printf("�빮�ڸ� ����ϸ�\n");
	printUpperCase(str); // printUpperCase ȣ��
}

void printUpperCase(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");
}
/*
int strLength(char s[])
{
	int i, count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return count;
}
*/

int strLength(char s[])
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	//printf("%d\n", i);
	return i;
}
