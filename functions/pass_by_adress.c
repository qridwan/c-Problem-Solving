#include <stdio.h>
void makePositive(int* pA)
{
    if (*pA < 0)
    {
        *pA = -*pA;
    }
}
int main()
{
    int a = -10;
    makePositive(&a);
    printf("a = %d\n", a);
    return 0;
}

/*
Asma wrote the following function to make an integer positive.
void makePositive(int a) {
    if (a < 0) {
        a = -a;
    }
    }

    Will it work? If not, how can she fix it?
    */