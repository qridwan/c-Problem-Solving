#include <stdio.h>
#include <stdbool.h>

bool is_reverse_sorted(int n, int a[])
{
    bool result = true;
    for (int i = 0; i + 1 < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            result = false;
            break;
        }
    }
    return result;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        int maxElement = a[steps], position = steps;
        for (int i = steps; i < n; i++)
        {
            if (a[i] > maxElement)
            {
                maxElement = a[i];
                position = i;
            }
        }
        swap(&a[steps], &a[position]);
        bool result = is_reverse_sorted(n, a); // 1 = true, 0 = false;
        // printf("true=1 false=0 result=%d\n", result);
        if (result == 1) // 1 == sorted is done;
        {
            break;
        }
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