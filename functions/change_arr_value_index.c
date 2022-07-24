
#include <stdio.h>

void change_values(int a[], int n, int L, int R)
{
    for (int i = 0; i < n; i++)
    {
        if (i == L)
        {
            for (int j = i; j <= R; j++)
            {
                a[j] = 0;
            }
        }
    }
}

int main()
{
    int N, L, R;
    scanf("%d %d %d", &N, &L, &R);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    change_values(arr, N, L, R);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}