#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i = 1;
    int num = 0;
    int sum = 0;

    while (i <= 5)
    {
        printf("0���� ū ���� �Է�(%d��°):", i);
        scanf("%d", &num);

        while (num <= 0)
        {
            printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�(%d��°):", i);
            scanf("%d", &num);
        }
        sum += num;
        i++;
    }
    printf("�Էµ� ���� �� ��: %d\n", sum);
}