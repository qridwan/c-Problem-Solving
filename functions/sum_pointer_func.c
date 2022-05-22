#include <stdio.h>

void makeSum(int a, int b, int *sum)
{
    int sum_of_ab = a + b;
    *sum = sum_of_ab + *sum;
    printf("sum = %d\n", *sum);
}

int main()
{
    int sum = 11;
    makeSum(2, 3, &sum);
    return 0;
}

/*
void makeSum(int a, int b, int *sum)
The above function takes as input two integers a and b and stores their sum in the variable sum. Implement the function.

*/