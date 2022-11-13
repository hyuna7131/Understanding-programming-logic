#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, x, y, n, sum= 0, count =0;

	scanf("%d", &x);
	scanf("%d", &y);

	for(i = 1; i <= 10; i ++)
	{
		scanf("%d", &n);
		
		if (x < n && n < y)
		{
			sum += n;
			count++;
		}	
	}
	printf("%d\n", sum);
	printf("%d\n", count);

	
}