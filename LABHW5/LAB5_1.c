//LAB5_1 이현아 20201704 컴퓨터학과 3학년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf("%c", &gender);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your height: ");
	scanf("%lf", &height);

	printf("성별\t\t나이\t\t키\n");
	printf("%c\t\t%d\t\t%f\n",gender, age, height);
	

}