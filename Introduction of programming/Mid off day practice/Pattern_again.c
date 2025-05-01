#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            printf("%d", j);
        }
        printf("\n");
        
    }
    int z = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k<=i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j < z; j++)
        {
            printf("%d", j);
        }
        
        printf("\n");
        z--;   
        
    }
    
    
    return 0;
}