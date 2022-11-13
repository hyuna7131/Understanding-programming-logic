#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change_pos(int arr[], int size)
{
    int i;
    for (i = size; i >= 1; i--)
        arr[i] = arr[i - 1];
    return;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return;
}

int main(void)
{
    int arr[30];
    int n, i, element;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &element);

    change_pos(arr, n);
    arr[0] = element;
    printArray(arr, n + 1);
}

/*
int main()
{
    int arr[20];
    int n, i, element;

    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    scanf("%d", &element);

    n++;
    for (i = n; i > 1; --i)
    {
        arr[i - 1] = arr[i - 2];
    }
    arr[0] = element;
    for (i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}
*/