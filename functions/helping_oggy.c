#include <stdio.h>
#include <string.h>
// Once Oggy went to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Oggy if he buys their useless apparatus. Oggy can «buy» any TV sets he wants. Though he's very strong, Oggy can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Oggy find out the maximum sum of money that he can earn.

/*
Input

    The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Oggy can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.
Output

    Output the only number — the maximum sum of money that Oggy can earn, given that he can carry at most m TV sets.
*/
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
};

int main()
{
    int input, hold;
    scanf("%d %d", &input, &hold);
    int arr[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, input);
    int newArr[hold];
    int length = 0;
    int sum = 0;
    for (int i = 0; i < input; i++)
    {
        if (arr[i] < 0 && length < hold)
        {
            sum += arr[i];
            length++;
        }
    }
    printf("%d\n", -sum);

    return 0;
}