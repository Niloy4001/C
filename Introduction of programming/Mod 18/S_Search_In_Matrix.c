#include <stdio.h>
#include <stdbool.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int num;
    scanf("%d", &num);
    bool is_exist = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == num)
            {
                is_exist = true;
            }
        }
    }
    if (is_exist == true)
    {
        printf("will not take number");
    }
    if (is_exist == false)
    {
        printf("will take number");
    }

    return 0;
}