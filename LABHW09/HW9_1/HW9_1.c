#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num1, num2, answer, rightanswer;
	char ch, op;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;
		switch (op)
		{	case 0:
				op = '+';
				rightanswer = num1 + num2;
				break;
			case 1:
				op = '-';
				rightanswer = num1 - num2;
				break;
			case 2:
				op = '*';
				rightanswer = num1 * num2;
				break;
			case 3:
				op = '/';
				rightanswer = num1 / num2;
				break;
		}
		printf("%d %c %d = ", num1, op, num2);
		scanf("%d", &answer);
		if (answer == rightanswer)
			printf("Your answer is right.\n");
		else
			printf("Your anwer is wrong.\n%d is the right answer\n", rightanswer);

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n)");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}