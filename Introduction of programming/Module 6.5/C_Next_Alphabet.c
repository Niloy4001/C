#include <stdio.h>

int main()
{

    char alpha;
    scanf("%c", &alpha);
    if (alpha == 122)
    {
        alpha = 97;
        printf("%c", alpha);
    }
    else if (alpha == 90)
    {
        alpha = 65;
        printf("%c", alpha);
    }
    else
    {

        printf("%c", alpha + 1);
    }

    return 0;
}