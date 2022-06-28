#include <stdio.h>
#include <stdbool.h>
void sort(int *a, int n)
{
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (a[check] < a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}
bool is_sorted(int *a, int n)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    sort(b, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[5] = {1, 5, 4, 2, 8};
    bool ans = is_sorted(arr, 5);
    if (ans)
    {
        printf("ARRAY IS SORTED\n");
    }
    else
        printf("ARRAY IS NOT SORTED\n");

    return 0;
}