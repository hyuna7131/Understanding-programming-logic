#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33,44, 55, 66 };
	int i, income, found;

	printf("Ž���� ������? ");
	scanf("%d", &income);

	found = 0;
	for (i = 0; i < 12; i++) {
		if (incomes[i] == income) {
			found = 1;
			break;
		}
	}
	if (found)
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n", income, i + 1);
	else
		printf("���� %d�� ���� ���� �����ϴ�\n", income);
	 
	return 0;
}