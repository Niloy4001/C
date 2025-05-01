#include <stdio.h>

int main()
{

    char str[10001];
    scanf("%s", str);

    int frequency[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        frequency[str[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {
            
            printf("%c - %d\n",i+97 , frequency[i]);
        }
        
    }
    

    return 0;
}