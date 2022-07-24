#include <stdio.h>

int main()
{
    int number = 100;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("Goodbye\n");
        }
        else
            printf("I Love Programming\n");
    }
    return 0;
}