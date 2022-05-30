#include <stdio.h>
#include <string.h>
void makeStrCopy(char in[], char out[])
{
    int len = strlen(in);
    // printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        out[i] = in[i];
    }
}
int main()
{
    char in[] = "hello";
    int len = strlen(in);
    char out[len];
    makeStrCopy(in, out);
    printf("%s\n", out);
    return 0;
}