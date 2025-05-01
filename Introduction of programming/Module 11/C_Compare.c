#include <stdio.h>

int main()
{

    char a[21];
    scanf("%s", &a);

    char b[21];
    scanf("%s", &b);

    int i = 0;
    while (1)
    {
        if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }

        else if (b[i] < a[i])
        {
            printf("%s", b);
            break;
        }
        else if (b[i] == a[i])
        {
            i++;
            continue;
        }
        else if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i] == '\0')
        {
            printf("%s", b);
            break;
        }
    }

    
    return 0;
}