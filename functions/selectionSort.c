#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// int min(int a, int b)
// {
//     return a < b ? a : b;
// }

void sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        int minElement = a[steps], position = steps;
        for (int i = steps; i + 1 < n; i++)
        {
            if (a[i] < minElement)
            {
                minElement = a[i];
                position = i;
            }
        }
        swap(&a[steps], &a[position]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(n, a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}