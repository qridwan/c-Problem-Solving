#include <stdio.h>
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
int main()
{
    int arr[5] = {1, 5, 4, 2, 8};
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}