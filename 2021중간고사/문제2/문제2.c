#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double bonus, score;

	scanf("%lf", &score);

	if (score >= 100)
		bonus = 0.5;
	else if (score >= 50)
		bonus = 0.25;
	else if (score >= 10)
		bonus = 0.15;
	else if (score < 10)
		bonus = 0;

	printf("%.2f\n", score + (score * bonus));
}