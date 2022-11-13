//HW3_4 이현아 20201704 컴퓨터학과 3학년
#include <stdio.h>
int main(void)
{
	int base, height, area1, area2, width, circumference;

	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &base, &height);

	area1 = (base * height) / 2;

	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다\n", base, height, area1);

	printf("직사각형의 가로와 높이를 입력하세요: ");
	scanf_s("%d %d", &width, &height);

	circumference = (width + height) * 2;
	area2 = width * height;

	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다\n", width, height, circumference, area2);

	return 0;
}