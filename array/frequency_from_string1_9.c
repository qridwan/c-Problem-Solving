#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    int fr[10] = {0};

    int len = strlen(str);
    for (int j = 0; j < len; j++)
    {
        int strInt = str[j] - '0';
        for (int i = 0; i <= 9; i++)
        {
            if (i == strInt)
            {
                fr[i]++;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", fr[i]);
    }

    return 0;
}