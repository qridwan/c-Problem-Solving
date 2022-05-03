#include <stdio.h>

int main()
{
    int point = 0;
    scanf("%d", &point);
    int required = 0;
    if (point <= 100 && point >= 0)
    {
        if (point >= 0 && point < 40)
        {
            required = 40;
        }
        else if (point >= 40 && point < 70)
        {
            required = 70;
        }
        else if (point >= 70 && point < 90)
        {
            required = 90;
        }
        else if (point >= 90 && point <= 100)
        {
            required = 100;
        }
        int diff = required - point;
        // printf("diff=%d\n", diff);
        if (point >= 90 && point <= 100)
        {
            printf("expert\n");
        }
        else if (diff != 0)
        {
            printf("%d\n", diff);
        }
    }

    return 0;
}