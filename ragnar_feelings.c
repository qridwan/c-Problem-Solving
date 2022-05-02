#include <stdio.h>

int main()
{
    int numb;
    scanf("%d", &numb);
    int feelings = 0;
    for (int i = 1; i <= numb; i++)
    {
        if (feelings % 2 == 0)
        {
            if (i != numb)
            {
                printf("I hate that ");
            }
            else
            {
                printf("I hate it ");
            }
        }
        else
        {
            if (i != numb)
            {
                printf("I love that ");
            }
            else
            {
                printf("I love it ");
            }
        }
        feelings++;
    }

    return 0;
}

/*
    Ragnar Lothbrok is a restless warrior and family man who longs to find and explore new countries across the sea , his most important wish is to find lands which are Good for planting . That's why he asked you to help him to express his feelings about lands.

   Ragnar likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

   For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

   Please help Ragnar.
Input

   The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.
Output

   Print Ragnar Lothbrok's feeling in one line.
Examples
   Input

   1

   Output

   I hate it

   Input

   2

   Output

   I hate that I love it

   Input

   3

   Output

   I hate that I love that I hate it
*/