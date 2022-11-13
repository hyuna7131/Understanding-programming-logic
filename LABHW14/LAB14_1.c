#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int); // ���⿡ ���̴� ������ó�� �Ű������� �̸��� ������ ���� �ִ�!
int main(void)
{
	int data[10]; // ��� ���࿡ ����� ���� ����
	int average, best;
	srand(time(NULL)); // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�
	//1) 
	generateData(data, 10);
	//2) 
	printf("������Ʈ���� ");
	printData(data, 10);
	//3) 
	average = averageData(data, 10);
	printf("������Ʈ�� ����� %d\n", average);
	//4) ȣ��κ� �߰�
	best = maxData(data, 10);
	printf("������Ʈ�� �� ���� ū���� %d\n", best);
}
void generateData(int a0[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		a0[i] = rand() % 100;
	return;
}
void printData(int a2[], int size)
{
	int i;
	for (i = 0; i < size; i++) // Index 0..9����
		printf("%d ", a2[i]);
	printf("\n");
	return;
}
int averageData(int a1[], int size)
{
	int i, total = 0, average;
	for (i = 0; i < size; i++)
		total += a1[i];
	average = total / size;
	return average;
}
int maxData(int a3[], int size)
{
	int i, best = a3[0];
	for (i = 0; i < size; i++) // Index 0..9����
		if (best < a3[i])
			best = a3[i];
	return best;
}