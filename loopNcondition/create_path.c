#include <stdio.h>
/*
    Matilda is practising driving. Since, she is not a very good driver, she drives in a weird pattern.

    She drives on a n by m board. Let (x, y) be the y-th cell from left in the x-th row . Matilda starts at (1, 1). Then she drives rightwards to (1, m). Then she goes down two cells to (3, m) . After than she moves left to (3, 1) and so on.

    Your task is to draw her path. If she visits a cell, it should be represented as hash characters ('#') and the unvisited cells should be filled with dots ('.').

    Refer to the sample tests in order to understand the pattern.

    Input
    The only line contains two integers: n and m (3 ≤ n, m ≤ 50).
    n is an odd number.
    
    Output
    Output n lines. Each line should contain a string consisting of m characters. Do not output spaces.
*/
int main()
{
    int line, point;
    scanf("%d %d", &line, &point);
    int sidePoint = 0;
    for (int i = 1; i <= line; i++)
    {
        if (i == 1 || i % 2 != 0)
        {
            for (int j = 1; j <= point; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= point; j++)
            {
                if (sidePoint % 2 == 0 && j == point)
                {
                    printf("#");
                }
                else if (sidePoint % 2 != 0 && j == 1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }

                if (j == point)
                {
                    sidePoint++;
                }
            }
        }

        printf("\n");
    }
    return 0;
}