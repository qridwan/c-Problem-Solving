#include <stdio.h>

int main()
{
    int loop, n;
    scanf("%d", &loop);
    for (int i = 0; i < loop; i++)
    {
        scanf("%d ", &n);
        int a[n];
        int newArr[n];
        int isEven = n % 2 == 0 ? 1 : 0;
        int middle = n / 2;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (isEven)
        {
            for (int i = 0, j = n - 1; i < middle; i++, j--)
            {
                // printf("%d %d\n", a[i], a[j]);
                newArr[2 * i] = a[i];
                newArr[(2 * i) + 1] = a[j];
            }
        }
        else
        {
            for (int i = 0, j = n - 1; i < (middle); i++, j--)
            {
                // printf("%d %d\n", a[i], a[j]);
                newArr[2 * i] = a[i];
                newArr[(2 * i) + 1] = a[j];
            }
            newArr[n - 1] = a[middle];
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", newArr[i]);
        }
        printf("\n");
    }

    return 0;
}