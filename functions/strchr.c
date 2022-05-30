#include <stdio.h>
#include <string.h>
char *str_char(char str[], char x)
{
    printf("%s %c", str, x);
}
int main()
{
    char text[100], divide;
    gets(text);
    scanf("%d", &divide);

    char *cur = text;
    char *position = str_char(cur, divide);
    printf("%d found at %d\n", position, position - text);
    // while (cur)
    // {
    //     char *position = str_char(cur, divide);
    //     if (position == NULL) break;
    //     printf("%d found at %d\n", position, position - text);
    //     cur = position + 1;
    // }

    return 0;
}