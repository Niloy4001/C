#include <stdio.h>

int main()
{

    int n, even = 0, odd = 0, neg = 0, pos = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        if (x % 2 != 0)
        {
            odd++;
        }
        if (x >= 1)
        {
            pos++;
        }
        if (x < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}