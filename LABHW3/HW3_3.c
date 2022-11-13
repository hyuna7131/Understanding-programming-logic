//HW3_3 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int 시, 분, 초, 총초;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &시, &분, &초);

	총초 = (시 * 3600) + (분 * 60) + 초;

	printf("---Calculation Result---\n");
	printf("Total %d seconds\n", 총초);

	return 0;
}