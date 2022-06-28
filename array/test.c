#include <stdio.h>
int main()
{
    // char a[10];
    // fgets(a, 10, stdin);
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // long long x = &arr[0], y = &arr[4];
    // printf("%lld %lld %lld",x, y, y - x);

    // char str[]={'g','l','o','b','e'};

    // printf("%s",str);
    char mystring[] = "abcdefg";

    char *ptr = mystring;

    ptr += 5;

    printf("%s", ptr);

    return 0;
}