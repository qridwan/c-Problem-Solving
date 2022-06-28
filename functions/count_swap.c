// Make a function named count_swaps() which will take an array of integers and the size of that array. You need to tell how many swaps you need while implementing the selection sort and return that number of swaps from that function.

#include <stdio.h>
int count_swap(int *a, int n)
{
    int swap_count = 0;
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (a[check] < a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
                swap_count++;
            }
        }
    }
    return swap_count;
}
int main()
{
    int arr[5] = {2, 1, 4, 3, 5};
    int ans = count_swap(arr, 5);
    printf("%d\n", ans);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    return 0;
}