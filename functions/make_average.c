#include <stdio.h>
float make_average(int *a, int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}
int main()
{
    int arr[4] = {0, 1, 2, 3};
    float ans = make_average(arr, 4);
    printf("%0.2lf\n", ans);
    return 0;
}