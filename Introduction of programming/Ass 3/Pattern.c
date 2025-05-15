#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sign = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= sign; j++)
        {
            if (i % 2 == 0)
            {

                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space--;
        sign += 2;
    }

    sign = sign - 4;
    space = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= sign; j++)
        {
            if (n % 2 == 0)
            {
                /* code */
                if (i % 2 == 0)
                {

                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
            else
            {
                if (i % 2 != 0)
                {

                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        space++;
        sign -= 2;
        printf("\n");
    }

    return 0;
}
