//LAB6_5 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("Enter a score : ");
	scanf("%d", &score);

	/*
	if (score >= 80)
		printf("The grade is A!\n");
	else if(score >= 50)
		printf("The grade is B!\n");
	else if(score >= 30)
		printf("The grade is C!\n");
	else
		printf("The grade is F!\n");

	return 0;
	*/

	if (score >= 80)
		grade = 'A';
	else if (score >= 50)
		grade = 'B';
	else if (score >= 30)
		grade = 'C';
	else
		grade = 'F';
	printf("The grade is %c\n", grade);
}