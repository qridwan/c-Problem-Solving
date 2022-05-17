#include <stdio.h>
#include <string.h>

int truncate(char s[], int k)
{
    int n = strlen(s);
    if (k > n || k < 0) return;
    s[k] = '\0';
}
int main()
{
    char s[100];
    gets(s);
    int k;
    scanf("%d", &k);
    truncate(s, k);
    printf("%s ", s);
    return 0;
}

/*
s = "abcdef"
truncate(s, 3)
s = "abc"
*/