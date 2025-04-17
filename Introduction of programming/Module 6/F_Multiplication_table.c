#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d", n);
        printf(" * ");
        printf("%d", i);
        printf(" = ");
        printf("%d\n", i * n);
    }

    return 0;
}