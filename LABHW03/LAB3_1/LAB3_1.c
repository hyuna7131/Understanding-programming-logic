//LAB3_1 ������ 20201704 ��ǻ���а� 3�г�
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
