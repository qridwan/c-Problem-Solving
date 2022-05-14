#include <stdio.h>
int main()
{
    int loop;
    scanf("%d", &loop);
    char kandie[loop];
    scanf("%s", kandie);
    int result = 0;
    for (int i = 0; i < loop; i++)
    {
        // printf("%c %c\n", kandie[i], kandie[i + 1]);
        if (kandie[i] == kandie[i + 1] && (i + 1) < loop)
        {
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}