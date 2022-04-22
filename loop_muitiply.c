#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);
    float sum = 0;
    for (int i = 1; i <= loop; i++)
    {
        float a, b;
        scanf("%f %f", &a, &b);

        float mult = a * b;
        sum += mult;
    }
    printf("%0.3f\n", sum);

    return 0;
}