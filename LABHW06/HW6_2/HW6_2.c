//HW6_2 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
		printf("Congratulation\n");
	else if (grade == 'B')
		printf("Okay, try harder\n");
	else if (grade == 'C')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("Try harder, you need to get 60 next time\n");
	}
	else if (grade == 'D' || grade == 'F')
		printf("Sorry, you should take this course again\n");
	else
		printf("Wrong grade\n");

}