#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int newArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        newArr[j] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = newArr[i];
        printf("%d ", arr[i]);
    }

    return 0;
}