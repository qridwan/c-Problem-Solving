#include <stdio.h>

int main()
{
    int number, a, b, c;
    scanf("%d", &number);
    int remain = number;
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            c = remain % 10;
        }
        else if (i == 2)
        {
            b = remain % 10;
        }
        else
        {
            a = remain % 10;
        }
        remain /= 10;
    }
    int abc = (a * 100) + (b * 10) + c;
    int bca = (b * 100) + (c * 10) + a;
    int cab = (c * 100) + (a * 10) + b;
    // printf("%d, %d, %d\n", abc, bca, cab);
    printf("%d\n", abc + bca + cab);

    return 0;
}

/*


    Let xyz denote the 333-digit integer whose digits are x, y, z from left to right.

    Given a 3-digit integer abcabcabc none of whose digits is 0, find abc+bca+cab.

rough

=> 123
x = 123 // for x%10 = a =3
        // x/10 => 12

y = 231
z = 312
*/