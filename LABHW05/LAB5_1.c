//LAB5_1 ������ 20201704 ��ǻ���а� 3�г�
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

	printf("����\t\t����\t\tŰ\n");
	printf("%c\t\t%d\t\t%f\n",gender, age, height);
	

}