#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int z = 2*n -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=  i - 1; j++)
        {
            printf(" ");
        }
        
        for (int k = z; k>=1;k--)
        {
            printf("*");
        }
        z=z-2;
        

        printf("\n");
    }

    return 0;
}