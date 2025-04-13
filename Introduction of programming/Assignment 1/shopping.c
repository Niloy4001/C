#include <stdio.h>
int main()
{
    int a, left;
    scanf("%d", &a);

    if (a>1000)
    {
        printf("I will buy Punjabi\n");
        left = a- 1000;
        if (left >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
        
    }else{
        printf("Bad luck!");
    }
    

    return 0;
}