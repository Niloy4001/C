#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n != 1999)
    {
        printf("Wrong\n");
    }
    if (n == 1999)
    {
        printf("Correct\n");
        return 0;
    }

       return main();
}