#include<stdio.h>
#include<string.h>
int main(){

    char str[1001];
    scanf("%s", &str);

    int i= 0;
    int j = strlen(str) - 1;
    char result[4]  = "YES";

    while (i<j && str[i] != '\0')
    {
       if (str[i] != str[j])
       {
        strcpy(result, "NO");
        break;
       }
       

        i++;
        j--;
        
    }
    printf("%s",result);
    
    return 0;
}