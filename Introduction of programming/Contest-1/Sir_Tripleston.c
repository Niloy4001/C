#include <stdio.h>
#include <string.h>

int main()
{

    char str[78];
    scanf("%s", &str);
    int fre[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%d\n", str[i]-97);
        int val = str[i] - 97;
        fre[val]++;
    }

    int letter;
    for (int i = 0; i < 26; i++)
    {

        if (fre[i] < 3)
        {
            letter = i + 97;
        }
    }
    printf("%c", letter);

    return 0;
}