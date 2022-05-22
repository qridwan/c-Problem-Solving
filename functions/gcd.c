#include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int n = 10, inp;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inp);
        arr[i] = inp;
    }
    int final_gcd = gcd(arr[0], arr[1]); //first 2 num gcd
    for (int i = 2; i < n; i++)
    {
        final_gcd = gcd(final_gcd, arr[i]);
        // printf("%d %d\n", arr[i], final_gcd);
    }
    printf("gcd= %d\n", final_gcd);
    return 0;
}

/*

Suppose you have a function gcd(a, b) that finds the gcd of two numbers. Write a program that takes as input 10 integers and finds their gcd.

*/