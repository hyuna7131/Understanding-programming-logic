#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int print_odd_digit(int num)
{
    int n, sum = 0;
    while (num > 0)
    {
        n = num % 10;
        if (n % 2 == 1)
            sum += n;
        num /= 10;
    }
    return sum;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    n *= 3;

    printf("%d\n", print_odd_digit(n));
}

/*
void print_odd_digit(int n)
{
    int n_3 = n * 3;
    int i, sum = 0;

    while (n_3)
    {
        i = n_3 % 10;
        if (i % 2 != 0)
            sum += i;
        n_3 = n_3 / 10;
    }
    printf("%d", sum);
}

int main()
{
    int n;
    printf("정수 입력 :");
    scanf("%d", &n);

    print_odd_digit(n);
}
*/