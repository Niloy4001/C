#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int space = n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=space; j++)
        {
            printf(" ");
        }
        int num = i;
        for (int j = 1; j<=i ; j++)
        {
            printf("%d", num);
            num--;
        }
        space--;
        printf("\n");
        
    }
    
    return 0;
}