#include <stdio.h>
/*
=========
PROBLEM
=========
Takahashi and Aoki decided to train themselves by running.
Takahashi repeats the following schedule: "Run for AAA seconds at BBB meters per second and then rest for CCC seconds."
Aoki repeats the following schedule: "Run for DDD seconds at EEE meters per second and then rest for FFF seconds."
When XXX seconds have passed since they simultaneously started running, which of Takahashi and Aoki is ahead?

Constraints
        1≤A,B,C,D,E,F,X≤1001 \leq A, B, C, D, E, F, X \leq 1001≤A,B,C,D,E,F,X≤100
        All values in input are integers.
Input
    Input is given from Standard Input in the following format:

    A B C D E F X

Output
    When X seconds have passed since they simultaneously started, if Takahashi goes ahead of Aoki, print Takahashi; if Aoki goes ahead of Takahashi, print Aoki; if they have advanced the same distance, print Draw.
*/
int main()
{
    int A, B, C, D, E, F, X;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    // takahashi
    int tRemainSec = 0;
    if (X > A + C)
    {
        tRemainSec = X - (A + C);
    }

    int tTotalDistance = (tRemainSec + A) * B;

    // Aoki;
    int aRemainSec = 0;
    if (D + F < X)
    {
        aRemainSec = X - (D + F);
    }

    int aTotalDistance = (aRemainSec + D) * E;

    printf("T=%d: A=%d\n", tTotalDistance, aTotalDistance);
    if (tTotalDistance > aTotalDistance)
    {
        printf("Takahashi\n");
    }
    else if (tTotalDistance == aTotalDistance)
    {
        printf("Draw\n");
    }
    else
    {
        printf("Aoki\n");
    }

    return 0;
}

/*
Rough
Takahashi B ms for A sec, Rest C sec
Aoki E ms for D sec, Rest F sec
3 m
5 m

taka;
 remainSec = X - (A+C)
 total dis for taka = (remainSec + A) * B

Aoki;
 remainSec = X - (D+F)
 dis = (remainSec + D) * E
*/