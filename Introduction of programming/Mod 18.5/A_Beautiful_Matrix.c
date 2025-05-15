#include <stdio.h>
#include<stdlib.h>

int main()
{

    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
               int c_diff = j-2;
               int r_diff = i-2;
               result = abs(c_diff) + abs(r_diff);
            }
        }
    }

    printf("%d", result);

    return 0;
}