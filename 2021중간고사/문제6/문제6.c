#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, i, j, answer;

	scanf("%d", &a);
	scanf("%d", &b);

	answer = 0;
	j = 1;
	i = b;
	while (i != 0)
	{
		i /= 10;
		j *= 10;
		
	}
	while (a != 0)
	{
		if (a % j == b)
		{
			answer += a;
			break;
		}
		a /= 10;
	}
	if (answer == 0)
		printf("0");
	else
		printf("%d", answer);
}