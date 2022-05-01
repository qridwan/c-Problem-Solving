#include <stdio.h>

int main()
{
    int num = 1234;
    int sum = 0;
    while (num > 0)
    {
        int digits = num % 10; // 4
        num = num / 10;
        sum += digits;
        printf("\n%d\n", sum);
    }
    return 0;
}