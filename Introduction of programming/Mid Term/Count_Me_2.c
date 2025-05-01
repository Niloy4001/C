#include<stdio.h>

int main(){

    char str[100001];
    scanf("%s", &str);

    int size_of_conso=0 ;
    for (int i = 0; i < strlen(str); i++)
    {
        
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            size_of_conso++;
        }
        
    }
    printf("%d", size_of_conso);
    
    return 0;
}