#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int sl);
int main(void)
{
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);
	return s;
}

char gradeDecision(int sl)
{
	if (sl >= 80)
		return 'A';
	else if (sl >= 50)
		return 'B';
	else
		return 'F';
}