#include <stdio.h>
#include <string.h>
void bar(void)
{
    printf("bar\n");
}
void foo(void)
{
    printf("foo\n");
    bar();
}
int main()
{
    char str[] = "abcd";
    char divide = 'c';
    char *tn;
    tn = strchr(str, divide);
    // printf("%s %d", tn, *tn);
    foo();
    // const char str[] = "http://www.tutorialspoint.com";
    // const char ch = '.';
    // char *ret;

    // ret = strchr(str, ch);

    // printf("String after |%c| is - |%s|\n", ch, ret);

    return 0;
}