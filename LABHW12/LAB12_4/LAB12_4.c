#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, num;
	int data[20];

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 0; i < 20; i++) 
		data[i] = (i+1) * num;
	
	for (j = 0; j < 20; j++) {
		printf("%5d", data[j]);

		if ((j + 1) % 5 == 0)
			printf("\n");
	}
	return 0;
}