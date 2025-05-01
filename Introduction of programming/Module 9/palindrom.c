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

    int i = 0;
    int j = n - 1;
    int tmp = "Palindrom";
    while (i < j)
    {
    if (arr[i] != arr[j])
    {
        tmp = "Not Palindrom";
        break;
    }

        i++;
        j--;
    }

    printf(tmp);

    return 0;
}