#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, max=-1, i;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a score: "); 
		scanf("%d", &n);
		if (max < n)
			max = n;
	}
	printf("The best score is %d.\n", max);

}