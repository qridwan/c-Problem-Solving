#include <stdio.h>

int main()
{
    int n, rotate;
    scanf("%d %d", &n, &rotate);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int newArr[n];
    newArr[0] = arr[rotate]; // 1st item
    int remainItems = n - (rotate + 1);
    int digit = 1;
    for (int i = 1; i <= remainItems; i++)
    {
        newArr[i] = arr[rotate + i]; // middle items
        digit++;
    }
    int prevItems = rotate - 1;
    for (int i = 1; i <= prevItems; i++)
    {
        newArr[digit] = arr[i - 1];
        digit++;
    }
    newArr[n - 1] = arr[rotate - 1]; // last item

    // int i = 0;

    //     while (i < rotate)
    //     {
    //         // for (int j = 0; j < n - 1; j++)
    //         // {
    //         //     int temp = arr[j];
    //         //     arr[j] = arr[j + 1];
    //  //     arr[j + 1] = temp;
    //         // }
    //         int temp = arr[n-1];
    //         arr[n-1] = arr[0];

    //         i++;
    //     }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", newArr[i]);
    }
    return 0;
}

/* A left rotation operation on an array of size 'n' shifts each of the array's elements '1' unit to the left. Given an integer 'd' rotate the array that many steps left and return the result.

Example:
d = 2
arr = [1, 2, 3, 4, 5]

After 2 rotations: arr = [3, 4, 5, 1, 2]
---
Input Format

The first line contains two space-separated integers that denote 'n', the number of integers, and 'd', the number of left rotations to perform.
The second line contains 'n' space-separated integers that describe arr[].

Constraints:
1 <= n <= 10^5
1 <= d <= n
1 <= a[i] <= 10^6

Sample Input:
5 4
1 2 3 4 5

Sample Output:
5 1 2 3 4

Explanation:

To perform 'd = 4' left rotations, the array undergoes the following sequence of changes:
[1, 2, 3, 4, 5] -> [2, 3, 4, 5, 1] -> [3, 4, 5, 1, 2] -> [4, 5, 1, 2, 3] -> [5, 1, 2, 3, 4] */