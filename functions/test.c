#include <stdio.h>
#include <string.h>

// void reverseArray(int *arr)
// {
//     int len = strlen(arr);
//     printf("%d", len);
// }
int main()
{
    int tmp, size, i, j;
    printf("Size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        // swap the elements
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}