#include <stdio.h>
void reverse(int *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[] = {5, 6, 7, 8};
    reverse(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}