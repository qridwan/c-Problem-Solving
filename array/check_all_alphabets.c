#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word[n];
    scanf("%s", word);
    int fr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        word[i] = toupper(word[i]);
        int alphaNum = (int)word[i];
        for (int a = 65, j = 0; a <= 90, j < 26; a++, j++)
        {
            if (alphaNum == a)
            {
                fr[j]++;
            }
        }
    }
    int absent = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fr[i] == 0)
        {
            absent++;
            break;
        }
    }
    // printf("absent=%d\n", absent);
    if (absent == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

/*
    Rick is creating a new device, and to test it he needs a special string. A string is called special if it contains all the letters of the alphabet, either in lowercase or uppercase.

    You are given a string, print "YES" (without quotes) if it's special and "NO" otherwise.
Input

    The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

    The second line contains the string. The string consists only of uppercase and lowercase Latin letters.
Output

    Output "YES" if the string contains all the letters of the alphabet, and "NO" otherwise.
Example
    Input

    12
    RickAndMorty

    Output

    NO

    Input

    44
    GrumpyWizardsMakeAToxicBrewfortheJovialqueen

    Output

    YES
*/