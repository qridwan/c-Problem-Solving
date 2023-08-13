#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main()
{
    int n,mul; // Variable
    scanf("%d",&n); // Input
    int arr[n];
    int count;
    for(int i = 0; i<n; i++) // Main Operation
    {
        scanf("%d ",&arr[i]);

    }
    scanf("%d",&mul);
    for(int i = 0; i<n; i++)
    {
        count = arr[i];
        for(int j = 0; j<n; j++)   {
            if(count == arr[j])continue;
            int value = count*arr[j];
            if(value == mul)
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
