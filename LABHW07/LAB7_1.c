#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num;
	char weather;

	printf("Enter a number: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("Spring\n");
		break;
	case 2:
		printf("Summer\n");
		break;
	case 3:
		printf("Fall\n");
		break;
	case 4:
		printf("Winter\n");
		break;
	default:
		printf("invalid number\n"); 
		break;
	}
}