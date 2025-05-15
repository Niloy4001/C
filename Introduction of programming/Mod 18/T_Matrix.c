#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primary_diagonal = 0, secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal = primary_diagonal + matrix[i][j];
            }
            if (i + j == n - 1)
            {
                secondary_diagonal = secondary_diagonal + matrix[i][j];
            }
        }
    }
    int difference = primary_diagonal - secondary_diagonal;

    printf("%d", abs(difference));

    return 0;
}