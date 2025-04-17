#include <stdio.h>

int main()
{

    int n, count = 0;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] % 2 != 0)
        {

            count++;
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");
    printf("The odd number on this array is :  %d ", count);

    return 0;
}