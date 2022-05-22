#include <stdio.h>
void square_value(int *x, int *y)
{
    *x = *x * *x;
    *y = *y * *y;
}
int main()
{

    int a = 4, b = 5;
    square_value(&a, &b);
    printf("%d %d\n", a, b); //16 25
    return 0;
}