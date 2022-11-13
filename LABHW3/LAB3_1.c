//LAB3_1 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int num1, num2;

	printf("Enter the first number: ");
	scanf_s("%d", &num1);

	printf("Enter the second number: ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}
