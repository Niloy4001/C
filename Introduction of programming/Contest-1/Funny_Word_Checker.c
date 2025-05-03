#include<stdio.h>

int main(){

    char word[101] ;
    scanf("%s", &word);
    int len = strlen(word);
    if (word[0] == word[len -1])
    {
        
        printf("Yes"); 
    }else{
        printf("No"); 

    }
    
    return 0;
}