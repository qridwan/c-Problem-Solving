#include <stdio.h>

int main()
{
    int n = 10;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        // Write Code Here
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    return 0;
}