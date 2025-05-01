#include <stdio.h>

int main()
{

    int n, lowest = 1000000000, position = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < lowest)
        {
            lowest = arr[i];
            position = i + 1;
        }
    }

    printf("%d %d", lowest, position);
    return 0;
}