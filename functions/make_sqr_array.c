#include <stdio.h>

void makeNArray(int n, int squares[])
{
    for (int i = 1; i <= n; i++)
    {
        squares[i] = i * i;
        // printf("%d ", squares[i]);
    }
    printf("\n");
}

int main()
{
    int n, squares[n];
    scanf("%d", &n);
    makeNArray(n, squares);
    return 0;
}

/*
void makeNArray(int n, int squares[]) populates squares with first n square numbers. For example, makeNarray(4, squares) will populate squares with 1, 4, 9, 16. Implement the function.
*/