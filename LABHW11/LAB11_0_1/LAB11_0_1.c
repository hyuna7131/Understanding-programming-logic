#include <stdio.h>
int printSquarel(void);
int main(void)
{
	int result;
	result = printSquarel();
	printf("Á¦°öÀº %d\n", result);
}

int printSquarel(void)
{
	int x = 5;
	
	return x * x;
}