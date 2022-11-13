#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int sl, int s2);
int main(void)
{
	int score1, score2;

	score1 = scoreReading();
	score2 = scoreReading();

	printf("Grade is %c!\n", gradeDecision(score1, score2));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);
	return s;
}

char gradeDecision(int sl, int s2)
{
	int average;
	char grade;

	average = (sl + s2) / 2;
	if (average >= 80)
		grade = 'A';
	else if (average >= 50)
		grade = 'B';
	else
		grade = 'F';

	return grade;
}

//if (average >= 80)
//	return 'A';
//else if (average >= 50)
//	return 'B';
//else
//	return 'F';