#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i = 1;
    int num = 0;
    int sum = 0;

    while (i <= 5)
    {
        printf("0보다 큰 수를 입력(%d번째):", i);
        scanf("%d", &num);

        while (num <= 0)
        {
            printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력(%d번째):", i);
            scanf("%d", &num);
        }
        sum += num;
        i++;
    }
    printf("입력된 값의 총 합: %d\n", sum);
}