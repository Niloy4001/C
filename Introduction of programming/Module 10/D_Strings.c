#include<stdio.h>

int main(){

    char str1[11] ,str2[11];
    scanf("%s %s", &str1, &str2);

    printf("%d %d\n", strlen(str1), strlen(str2));
    printf("%s%s\n", str1, str2);
    
    char tmp;
    tmp = str1[0];
    str1[0] = str2[0]; 
    str2[0] = tmp;
    
    printf("%s %s\n", str1, str2);
    
    return 0;
}