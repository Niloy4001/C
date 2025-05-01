#include <stdio.h>

int main()
{

    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int complete_work_by_one = m1 * d;
        int complete_work_by_adding_additional = complete_work_by_one / (m1 + m2);

        int fewer_days = d - complete_work_by_adding_additional;

        printf("%d\n", fewer_days);

    }

    return 0;
}