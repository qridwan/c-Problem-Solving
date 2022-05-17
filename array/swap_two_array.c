#include <stdio.h>

int main()
{
    // int n = 10;
    // int a[n], b[n];
    // for (int i = 0; i < n; i++)
    // {
    //     // Write Code Here

    //     int temp = a[i];
    //     a[i] = b[i];
    //     b[i] = temp;
    //     printf("a=%d b=%d\n", a[i], b[i]);
    // }
    char a[10];
    a[0] = 'b';
    a[1] = 'a';
    a[2] = 'n';
    a[3] = 'a';
    a[4] = 'n';
    a[5] = 'a';
    for (int i = 0; i < 10; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}