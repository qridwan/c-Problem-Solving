#include <stdio.h>
//  Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}