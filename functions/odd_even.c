// Make a function named odd_even() which takes an integer value and tells whether this value is even or odd. You need to do it in 4 ways:
//  i) Has return + Has parameter
//  ii) No return + Has parameter
//  iii) Has return + No parameter
//  iv) No return + No parameter

#include <stdio.h>
#include <stdbool.h>
bool odd_even()
{
    int number;
    scanf("%d", &number);
    if (number % 2 == 0 && number != 0)
        return true; // true even
    else
        return false; // false odd
}
int main()
{
    int num = 3;

    bool result = odd_even(num);
    if (result)
    {
        printf("EVEN");
    }
    else
        printf("ODD");

    return 0;
}
