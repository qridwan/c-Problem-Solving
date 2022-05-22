#include <stdio.h>
#include <string.h>

void stringConcat(char a[], char b[], char out[])
{
    int lenA = strlen(a);
    int lenB = strlen(b);

    for (int i = 0; i < lenA; i++)
    {
        out[i] = a[i];
    }
    for (int i = lenA; i < (lenA + lenB); i++)
    {
        out[i] = b[i - lenA];
    }
}
int main()
{
    char str1[100], str2[100], str3[200];
    int i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    stringConcat(str1, str2, str3);
    printf("Concatenated string= %s\n", str3);
    return 0;
}