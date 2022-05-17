#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}

int getMax(int numb, int arr[])
{
    int answer = arr[0];
    for (int i = 1; i < numb; i++)
    {
        answer = max(answer, arr[i]);
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
    int max = getMax(n, a);
    printf("%d", max);
    return 0;
}