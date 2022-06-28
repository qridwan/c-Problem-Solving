#include <stdio.h>
float make_sum(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    return a + b;
}
int main()
{
    float ans = make_sum();
    printf("%lf\n", ans);
    return 0;
}