#include <stdio.h>

int main()
{
    int people, gift, order;
    scanf("%d %d %d", &people, &gift, &order);
    for (int i = 1; i <= gift; i++)
    {
        if (i == 1)
        {
            continue;
        }
        else if (order < people)
        {
            order++;
        }
        else
        {
            order = 1;
        }
    }
    printf("%d\n", order);
    return 0;
}