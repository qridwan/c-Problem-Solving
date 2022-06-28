#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    int sum = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        };
        printf("%d\n", sum);
    }

    return 0;
}