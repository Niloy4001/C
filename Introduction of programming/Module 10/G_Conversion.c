#include<stdio.h>

int main(){

    char str[100001];
    fgets(str, 100001, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i]+ 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i]- 32;
        }
        
        printf("%c", str[i]);
    }
    
    
    return 0;
}