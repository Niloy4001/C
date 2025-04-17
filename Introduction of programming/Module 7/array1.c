#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {

            printf("%d ", arr1[i]);
        }
    }

    return 0;
}