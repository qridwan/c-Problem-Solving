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
    int tFullRun = X / (A + C);
    int tLeft = X % (A + C);
    int tDistance = 0;

    for (int i = 1; i <= tFullRun; i++)
    {
        tDistance += A * B;
    }
    if (tLeft >= A)
    {
        tDistance += A * B;
    }
    else if (tLeft < A)
    {
        tDistance += tLeft * B;
    }
    // printf("tFullRun= %d Left= %d tDistance= %d\n", tFullRun, tLeft, tDistance);

    int aFullRun = X / (D + F);
    int aLeft = X % (D + F);
    int aDistance = 0;

    for (int i = 1; i <= aFullRun; i++)
    {
        aDistance += D * E;
    }
    if (aLeft >= D)
    {
        aDistance += D * E;
    }
    else if (aLeft < D)
    {
        aDistance += aLeft * E;
    }
    // printf("aFullRun= %d Left= %d aDistance= %d\n", aFullRun, aLeft, aDistance);
    if (tDistance > aDistance)
    {
        printf("Takahashi\n");
    }
    else if (tDistance == aDistance)
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
4 2 3 20;

4 3 4 3 ==> 14 , left 6 sec

total fullLoop = 20/4+3 times; //2 times
distance = 0
for(int i =1; i<= fullLoop*2; i++){
 if(i%2 == 0) continue
else{
distance += 4*2;
}
}

0 == 0 ==> 0
3 == 3, 0 ==> 3*2;
6 ==> 4, 2 == 4*2;
*/