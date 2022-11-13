#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change_pos(int arr[], int size, int pos)
{
    int i;
    for (i = size; i > pos; i--)
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
    int n, i, pos, element;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &element);

    change_pos(arr, n, pos);
    arr[pos] = element;
    printArray(arr, n + 1);
}

/*
int main(void)
{
    int num[30];
    int n, i, pos, element;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);

    scanf("%d %d", &pos, &element);

    for(i = n - 1; i >= pos; i--)
        num[i + 1] = num[i];
    num[pos] = element;

    for(i = 0; i <= n; i++)
        printf("%d ", num[i]);
}
*/

/*
int main()
{
    int arr[20], arr1[20];
    int n, i, pos, element;

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        arr1[i] = arr[i];

    scanf("%d %d", &pos, &element);

    n++;

    for (i = pos; i < n; i++)
    {
        arr[i+1] = arr1[i];
    }
    arr[pos] = element;
    

    for (i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}
*/