//HW3_2 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int 총초, 시, 분, 초;

	printf("Enter the total seconds: ");
	scanf_s("%d", &총초);

	시 = 총초 / 3600;
	분 = 총초 % 3600 / 60;
	초 = 총초 % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", 총초);
	printf("%dh %dm %ds\n", 시, 분, 초);

	return 0;
}