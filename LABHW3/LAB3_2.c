//LAB3_2 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int hour, minute, minutes;

	printf("Enter the total minutes: ");
	scanf_s("%d", &minutes);
	
	hour = minutes / 60;
	minute = minutes % 60;

	printf("%d minutes\n", minutes);
	printf("%dh %dm\n", hour, minute);

	return 0;
}