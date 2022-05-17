#include <stdio.h>
void Rotate(int n, int a[])
{
    int first = a[0];
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = first;
}
int rotateByK(int n, int a[], int k)
{
    k = k % 5; // optimization -_-
    for (int i = 0; i < k; i++)
    {
        Rotate(n, a);
    }
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    rotateByK(n, a, k);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}