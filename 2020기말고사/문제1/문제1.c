#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20
int main(void)
{
	int i, num, key, count = 0;
	int n[SIZE];

	scanf("%d\n", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &n[i]);
	scanf("\n%d", &key);

	for (i = 0; i < num; i++)
		if (n[i] == key)
			count++;

	printf("%d\n", count);

	/*
	int n, s[20], key, i, count=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	scanf("%d", &key);

	for (i = 0; i < n; i++)
		if (s[i] == key)
			count++;

	printf("%d\n", count);
	*/
}