//LAB3_4 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int base, height, area;

	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &base, &height);

	area = (base * height) / 2;

	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다\n", base, height, area);
	return 0;
}