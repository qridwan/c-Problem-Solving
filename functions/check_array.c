// Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.

#include <stdio.h>
#include <stdbool.h>
bool check_array(int *array, int n)
{
    bool isPresent = false;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1) // loop for 1st time
        {
            for (int j = 0; j < n; j++)
            {
                if (i == array[j])
                {
                    isPresent = true;
                    break;
                }
                else
                    isPresent = false;
            }
        }
        else if (isPresent) // if prev number is present then continue
        {
            for (int j = 0; j < n; j++)
            {
                if (i == array[j])
                {
                    isPresent = true;
                    break;
                }
                else
                    isPresent = false;
            }
        }
    }
    return isPresent;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    bool ans = check_array(arr, 6);
    if (ans)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}