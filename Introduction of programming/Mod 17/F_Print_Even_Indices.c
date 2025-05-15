#include <stdio.h>

void even_indices(int arr[], int size, int idx)
{

    if (idx == size)
    {
        return;
    }

    even_indices(arr, size, idx + 1);
    if (idx % 2 == 0)
    {
        printf("%d ", arr[idx]);
    }
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
    even_indices(arr, n, 0);

    return 0;
}