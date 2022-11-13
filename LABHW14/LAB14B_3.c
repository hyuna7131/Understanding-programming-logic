#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printUpperCase(char s[]);
int strLength(char s[]);
int main(void)
{
	char str[81];
	printf("Enter a string:");
	scanf("%s", str);

	printf("길이는 %d\n", strLength(str)); // strLength 호출

	printf("대문자만 출력하면\n");
	printUpperCase(str); // printUpperCase 호출
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
