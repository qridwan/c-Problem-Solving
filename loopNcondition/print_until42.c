#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 42 || n >= 100)
        {
            break;
            return 0;
        }
        else
            printf("%d\n", n);
    }

    return 0;
}