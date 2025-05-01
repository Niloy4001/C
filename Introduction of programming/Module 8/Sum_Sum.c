#include <stdio.h>

int main()
{

    int n, sum_Of_Pos = 0, sum_Of_Neg = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum_Of_Pos = sum_Of_Pos + arr[i];
        }
        else if (arr[i] < 0)
        {
            sum_Of_Neg = sum_Of_Neg + arr[i];
        }
    }
    printf("%d %d", sum_Of_Pos, sum_Of_Neg);
    return 0;
}