#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int tc = (n - 1) + n;
    int x = n;
    int y = tc;
    for (int i = 1; i <= tc; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            
            printf("%d ", x);
        }
        x--;
        y-=2;
        printf("\n");
        
    }
    
    
    return 0;
}