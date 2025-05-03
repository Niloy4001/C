#include<stdio.h>

int main(){

    char word1[101], word2[101];
    scanf("%s %s", word1, word2);

    for (int i = 0; i < strlen(word1); i++)
    {
        int hh = 1; 
        for (int j = 0; j < strlen(word2); j++)
        {
            if (word1[i] == word2[j])
            {
                hh = 1;
                break;
            }
            hh = 0;
            
        }
        if (hh == 0)
        {
            printf("No");
            return 0;
            
        }
        
        
    }
    printf("Yes");
    


    return 0;
}