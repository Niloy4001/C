#include<stdio.h>

int main(){

    char a[21];
    scanf("%s", &a);

    char b[21];
    scanf("%s", &b);

    int value = strcmp(a,b);
    if (value < 0)
    {
        printf("%s", a);
    }
    else if (value > 0)
    {
        printf("%s", b);
    }
    else if (value == 0)
    {
        printf("%s", b);
    }
    
    return 0;
}