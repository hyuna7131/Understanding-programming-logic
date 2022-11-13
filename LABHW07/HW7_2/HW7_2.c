#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char oper;
	int num1, num2, answer, answer1;

	printf("Enter an operator: ");
	scanf("%c", &oper);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	switch (oper)
	{
	case '+':
		answer = num1 + num2;
		break;
	case '*':
		answer = num1 * num2;
		break;
	case '-':
		answer = num1 - num2;
		break;
	case '/':
		answer = num1 / num2;
		break;
	}
	printf("%d %c %d = ", num1, oper, num2);
	scanf("%d", &answer1);

	if (answer1 == answer)
		printf("Right answer\n");
	else
		printf("Wrong!\n");
		printf("%d is the right answer\n", answer);

}