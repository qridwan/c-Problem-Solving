#include <stdio.h>

int main()
{
    int start, end, target;
    scanf("%d %d %d", &start, &end, &target);
    int xTime = target + 1;

    if (start < end)
    {
        if (xTime >= start && xTime <= end)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else // end < start ==> 20 15
    {
        int swapEnd = start; // 20
        int swapStart = end; // 15

        // 0 - 12t

        // 13- 23
        if (end == 0 && xTime >= start)
        {
            printf("Yes\n");
        }
        else if (xTime > swapStart && xTime < swapEnd) // xTime: 13, start:20, end:15
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
