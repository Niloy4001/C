#include <stdio.h>

int main()
{

    int n, first_digit, last_digit;
    scanf("%d", &n);
    first_digit = n / 10;
    last_digit = n % 10;
    if (last_digit == 0)
    {
        printf("YES");
    }

    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {

        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}