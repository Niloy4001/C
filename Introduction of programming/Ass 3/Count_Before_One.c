#include <stdio.h>

int count_before_one(int a[], int size)
{

    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            num++;
        }
    }
    return num;
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = count_before_one(arr, n);
    printf("%d", num);

    return 0;
}