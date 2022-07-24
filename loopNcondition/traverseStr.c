#include <stdio.h>
#include <string.h>

int main()
{
    int L, R;
    char str[100000];
    scanf("%d %d", &L, &R);
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (i == L - 1)
        {
            int formula = (L + ((R - L) / 2));
            for (int j = i, k = R - 1; j < formula; j++, k--)
            {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}