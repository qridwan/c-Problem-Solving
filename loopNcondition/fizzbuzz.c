#include <stdio.h>

int main()
{
    int a, b, loop;
    scanf("%d %d %d", &a, &b, &loop);

    for (int i = 1; i <= loop; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % a == 0)
        {
            printf("Fizz\n");
        }
        else if (i % b == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}