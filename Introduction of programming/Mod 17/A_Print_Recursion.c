#include<stdio.h>


void printIlove(int n, int i){

    if (i>n)
    {
        return;
    }
    
    printf("I love Recursion\n");
    printIlove(n, i+1);
}

int main(){

    int n;
    scanf("%d", &n);
    printIlove(n,1);
    return 0;
}