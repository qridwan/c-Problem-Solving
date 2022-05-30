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
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bool result = is_reverse_sorted(n, a);
    printf("%d\n", result);
    printf("\n");
    return 0;
}