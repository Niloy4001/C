#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int space = n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("*");
        }
        for (int k = space; k >= 1; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("*");
        }

        space = space - 2;
        printf("\n");
        if (i == n / 2)
        {
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    int star = n / 2;
    int star1 = n / 2;
    int spa = 1;
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        star--;
        for (int k = 1; k <= spa; k++)
        {
            printf(" ");
        }
        spa = spa + 2;
        for (int j = star1; j >= 1; j--)
        {
            printf("*");
        }
        star1--;

        printf("\n");
    }

    return 0;
}