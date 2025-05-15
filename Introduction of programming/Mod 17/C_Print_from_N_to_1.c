#include<stdio.h>

void inc(int n, int i){
    if (i>n)
    {
        return;
    }
    inc(n, i+1);
    if (i==1)
    {
        printf("%d", i);
        return;
    }
    
    printf("%d ", i);
    
}

int main(){

    int n;
    scanf("%d", &n);
    inc(n,1);
    return 0;
}