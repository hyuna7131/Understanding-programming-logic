//HW5_1 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch;

	printf("Enter an upper letter(A-Y): ");
	scanf("%c", &ch);

	printf("Character given is %c(%d)\n", ch, ch);
	ch += 1;
	printf("The next character is %c(%d)\n", ch, ch);
	ch += 31;
	printf("The lower case letter is %c (%d)\n", ch, ch);

}