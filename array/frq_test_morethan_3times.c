#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int fr[2 * 10 ^ 5] = {0};
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (fr[arr[i]] >= 3)
        {
            printf("%d", arr[i]);
            break;
        }
        else if (i == n - 1)
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}