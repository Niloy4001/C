#include <stdio.h>
#include <string.h>

int main()
{

    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        char str[10001];
        scanf("%s", &str);
        int capitals = 0, smalls = 0, digits = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                digits++;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                capitals++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                smalls++;
            }
        }
        printf("%d %d %d\n", capitals, smalls, digits);
    }

    return 0;
}