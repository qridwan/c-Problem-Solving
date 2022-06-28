// Question: Make a function named change_array() which will take an integer array and size of that array. After that you will reverse that array and put that in a new array and print it in the main() function. You know that you can’t return an array normally, so you need to make that array in the main() function and pass that through the parameter.

#include <stdio.h>

void change_array(int a[], int n, int *b)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9};
    int newArr[5];
    change_array(arr, 5, &newArr[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}