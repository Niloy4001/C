#include <stdio.h>

int main()
{

    int n, max=1000000000;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }

    printf("minimum number is : %d ", max);

    return 0;
}