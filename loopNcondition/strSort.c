#include <stdio.h>
#include <string.h>

void sort(int *a, int n)
{
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (a[check] < a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int arr[len];
    int length = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != 43)
        {
            int num = str[i] - 48;
            arr[length] = num;
            length++;
        }
    }
    sort(arr, length);

    for (int i = 0; i < length; i++)
    {
        if (i == length-1)
        {
            printf("%d\n", arr[i]);
        }else{
            printf("%d+", arr[i]);
        }
        
    }

    return 0;
}