//HW3_4 ������ 20201704 ��ǻ���а� 3�г�
#include <stdio.h>
int main(void)
{
	int base, height, area1, area2, width, circumference;

	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height);

	area1 = (base * height) / 2;

	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area1);

	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &width, &height);

	circumference = (width + height) * 2;
	area2 = width * height;

	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�\n", width, height, circumference, area2);

	return 0;
}