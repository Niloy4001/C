#include<stdio.h>

void inc(int n, int i){
    if (i>n)
    {
        return;
    }
    printf("%d\n", i);
    inc(n, i+1);
    
}

int main(){

    int n;
    scanf("%d", &n);
    inc(n,1);
    return 0;
}