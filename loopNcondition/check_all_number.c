#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int fr[10] = {0};
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((int)str[i] >= 48 && (int)str[i] <= 57)
        {
            int number = (int)str[i] - 48;
            fr[number]++;
        }
    }
    int hasAllNumber = 0;
    for (int i = 0; i < 10; i++)
    {
        if (fr[i])
        {
            hasAllNumber = 1;
        }
        else
        {
            hasAllNumber = 0;
            break;
        }
    }
    if (hasAllNumber)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}