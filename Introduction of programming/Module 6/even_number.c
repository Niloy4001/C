#include <stdio.h>

int main()
{

    int e;
    scanf("%d", &e);
    
    if (e == 1)
    {

        printf("-1");
    }
    else{
        for (int i = 1; i <= e; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    }

    return 0;
}