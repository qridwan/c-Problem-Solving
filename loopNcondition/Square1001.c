#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        int A = sum * 2;
        int B = sum + k;
        if (A > B)
        {
            sum = B;
        }
        else
            sum = A;
        // printf("A= %d B= %d sum= %d\n", A, B, sum);
    }
    printf("%d\n", sum);

    return 0;
}

/*
    Square1001 has seen an electric bulletin board displaying the integer 111. He can perform the following operations A and B to change this value:

        Operation A: The displayed value is doubled.
        Operation B: The displayed value increases by KKK.

    Square1001 needs to perform these operations NNN times in total. Find the minimum possible value displayed in the board after NNN operations.

*/