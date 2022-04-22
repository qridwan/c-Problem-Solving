#include <stdio.h>

int main()
{
    int a_bottle_limit, a_bottle_filled, b_bottle_have;
    scanf("%d %d %d", &a_bottle_limit, &a_bottle_filled, &b_bottle_have);

    int a_bottle_space = a_bottle_limit - a_bottle_filled;
    int b_bottle_space = b_bottle_have - a_bottle_space;
    if (a_bottle_space <= 0)
    {
        printf("%d\n", b_bottle_have);
    }
    else if (b_bottle_space < 0)
    {
        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", b_bottle_space);
    }

    return 0;
}

/*
We have two bottles for holding water.

Bottle 11 can hold up to AA milliliters of water, and now it contains BB milliliters of water.

Bottle 22 contains CC milliliters of water.

We will transfer water from Bottle 22 to Bottle 11 as much as possible.

How much amount of water will remain in Bottle 22?*/