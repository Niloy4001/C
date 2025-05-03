#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    char num[n];
    scanf("%s", num);

    long long int total = 0;

    for (int i = 0; i < strlen(num); i++)
    {
        total = total + (num[i] - 48);
    }
    
    if (total % 3 == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    


    return 0;
}