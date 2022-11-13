#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, key, m, order, i, j;

	scanf("%d", &n);
	scanf("%d", &key);

	order = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		if (m == key)
		{
			order = 1;
			j = i;
			break;
		}
	}
	if(order == 1)
		printf("%d\n", j);
	if (order == 0)
		printf("not found\n");

	return 0;

	/* best answer (flag 변수 사용)
	int i, n, key, number, found;

	scanf("%d", &n);
	scanf("%d", &key);

	found = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);

		if (number == key)
		{
			found = 1;
			break;
		}
	}
	if(found)
		printf("%d\n", j);
	else
		printf("not found\n");

	return 0;
	*/

	/* flag 변수 사용 X
	int n, key, i, num;

	scanf("%d %d", &n, &key);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);

		if (num == key)
			break;
	}

	if( i == n + 1)
		printf("%d\n", i);
	else
		printf("not found\n");
	*/
}
