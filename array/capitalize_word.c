#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[1000];
    scanf("%s", word);
    int len = strlen(word);
    // char newWord[len];
    if (islower(word[0]))
    {
        word[0] = toupper(word[0]);
    }
    puts(word);
    return 0;
}