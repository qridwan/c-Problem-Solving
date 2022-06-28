#include <stdio.h>
void delete (int *a, int n, int pos)
{
    for (int i = pos + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int pos;
    scanf("%d", &pos);
    delete (arr, 7, pos);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}