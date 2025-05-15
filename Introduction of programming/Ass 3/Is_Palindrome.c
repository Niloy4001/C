#include <stdio.h>
#include <string.h>

int is_palindrome(char word[])
{
    int flag = 0;
    int i = 0;
    int j = strlen(word) - 1;

    if (strlen(word) == 1)
    {
        flag = 1;
    }
    else
    {
        while (i < j)
        {
            if (word[i] == word[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            i++;
            j--;
        }
    }
    return flag;
}

int main()
{

    char word[1001];
    scanf("%s", word);

    int flag = is_palindrome(word);

    if (flag == 0)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }

    return 0;
}