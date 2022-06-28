#include <stdio.h>
#include <string.h>

int count_zeros(char string[])
{
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        int num = string[i] - '0';
        if (num == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[] = "0111100";

    int ans = count_zeros(str);
    printf("%d\n", ans);
    return 0;
}