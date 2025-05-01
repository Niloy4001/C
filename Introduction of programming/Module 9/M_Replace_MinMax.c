#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = 1000000000, max = 0;
    int tmp = min;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] == max)
        {
            arr[i] == min;
            continue;
        }
        // printf("%d ", arr[i]);
        if (arr[i] == max)
        {
            arr[i] == tmp;
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}