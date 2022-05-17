#include <stdio.h>
void update(int n, char a[])
{

    n++;

    a[0] = '0';
}
int main()
{
    int n = 10;

    char a[] = "10000";

    update(n, a);

    printf("%d %s", n, a);
    // int num = 1234;
    // int sum = 0;
    // while (num > 0)
    // {
    //     int digits = num % 10; // 4
    //     num = num / 10;
    //     sum += digits;
    //     printf("\n%d\n", sum);
    // }
    return 0;
}