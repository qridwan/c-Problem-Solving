#include <stdio.h>
void insert(int *a, int n, int pos, int val)
{
    for (int i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int pos, value;
    scanf("%d %d", &pos, &value);
    insert(arr, 7, pos, value);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}