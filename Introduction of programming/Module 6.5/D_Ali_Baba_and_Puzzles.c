#include <stdio.h>

int main()
{

    long long int first, second, third;
    long long int fourth;
    scanf("%d %d %d %lld", &first, &second, &third, &fourth);
    if ((first) + (second) - (third) == fourth )
   
    {
        printf("YES\n");
        printf("1\n");
    }
    else if ( (first) + (second) * (third) == fourth)
    {
        printf("YES\n");
        printf("2\n");
    }
    else if ( (first) - (second) + (third) == fourth )
    {
        printf("YES\n");
        printf("3\n");
    }
    else if ((first) - (second) * (third) == fourth )
    {
        printf("YES\n");
        printf("4\n");
    }
    else if ((first) * (second) + (third) == fourth )
    {
        printf("YES\n");
        printf("5\n");
    }
    else if ((first) * (second) - (third) == fourth)
    {
        printf("YES\n");
        printf("6\n");
    }
    
    else
    {
        printf("NO");
    }

    // printf("%d %d %d %lld", first,second, third,fourth);

    return 0;
}