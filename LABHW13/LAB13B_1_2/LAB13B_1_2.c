#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678";

	printf("--���� �� ���ڿ�--\n");
	printf("%s\n", str);

	for (i = 0; i < 4; i++)
	{
		ch = str[7 - i];
		str[7 - i] = str[i];
		str[i] = ch;
	}

	printf("\n--���� �� ���ڿ�--\n");
	printf("%s\n", str);

	return 0;
}