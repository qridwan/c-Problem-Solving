#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, left = n;
    while (left > 0)
    {
        int number = left % 10;
        sum += number;
        left = left / 10;
        // printf("left%d sum%d num%d\n", left, sum, number);
    }
    printf("%d\n", sum);
    return 0;
}