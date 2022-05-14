#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);
    int items[loop];
    int result = 0;
    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &items[i]);
    }
    int maxNum = items[0];
    for (int i = 1; i < loop; i++)
    {
        if (maxNum < items[i])
        {
            maxNum = items[i];
        }
    }
    // printf("max=%d", maxNum);
    for (int i = 0; i < loop; i++)
    {
        if (items[i] < maxNum)
        {
            result += (maxNum - items[i]);
        }
    }
    printf("%d\n", result);
    return 0;
}

/*
    You are given N items. The i’th item has value Ai. You can increase any item’s value by any amount. You need to make the value of all the items equal by doing this operation any number of times. What is the minimum total amount needed to make all the items equal?
Input

    The first line contains the integer N (1 ≤ N ≤ 100) .

    The second line contains N integers A1, A2, ..., An, here Ai (0 ≤ Ai ≤ 106) .
Output

    In the only line print one integer, the minimum total amount needed to make all the items equal.
Sample 1
    Inputcopy 	Outputcopy

    5
    0 1 2 3 4



    10

Sample 2
    Inputcopy 	Outputcopy

    5
    1 1 0 1 1



    1

Sample 3
    Inputcopy 	Outputcopy

    3
    1 3 1



    4

Sample 4
    Inputcopy 	Outputcopy

    1
    12

    0

Note

    In the first example, if we add to the first value 4, to the second 3, to the third 2 and to the fourth 1, then all of the items are equal to 4.

    In the second example, it is enough to add 1.

    In the third example, it is necessary to add 2 to the first and the third value to make the all the values equal to 3.

    In the fourth example, it is possible to add nothing to any values because all values are equal.
*/