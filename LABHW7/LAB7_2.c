#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char oper;
	int num1, num2, answer;

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
	printf("%d %c %d = %d\n", num1, oper, num2, answer);
}