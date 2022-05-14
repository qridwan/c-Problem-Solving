#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char w[100];
    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s", w);
            int wLen = strlen(w);
            if (wLen >= 2 && wLen <= 100)
            {
                // int nW[100];
                // nW[0] = w[0];
                // nW[1] = w[1];
                // int index = 2;
                // printf("%d %c\n", wLen, nW[1]);
                printf("%c%c", w[0], w[1]);
                for (int j = 3; j < wLen; j += 2)
                {
                    // nW[index] = w[j];
                    // index++;
                    printf("%c", w[j]);
                }
                // for (int i = 0; i < wLen; i++)
                // {
                //     printf("%c", nW[i]);
                // }
                printf("\n");
            }
        }
    }

    return 0;
}
/*
    Tania and Pao are training for the next ICPC season but they have decided to rest, for that reason Tania created a game where she guesses the strings that Paola made for her.

    At first, Paola came up with the secret string A consisting of lowercase English letters. The string A has a length of 2 or more characters. Then, from string A she builds a new string B and offers Tania the string B so that she can guess the string A.

    Paola builds B from A as follows: she writes all the substrings of length 2 of the string A in the order from left to right, and then joins them in the same order into the string B.

    For example, if Paola came up with the string A="bcdaf", then all the substrings of length 2 of the string A are: "bc", "cd", "da","af". Therefore, the string B="bccddaaf".

    You are given the string B. Help Tania to guess the string A that Paola came up with. It is guaranteed that B was built according to the algorithm given above. It can be proved that the answer to the problem is unique.
Input
    The first line contains a single positive integer t (1≤t≤1000) — the number of test cases in the test. Then t test cases follow. Each test case consists of one line in which the string B is written, consisting of lowercase English letters (2≤|B|≤100) — the string Paola came up with, where |B| is the length of the string B. It is guaranteed that B was built according to the algorithm given above.
Output
    Output t answers to test cases. Each answer is the secret string A, consisting of lowercase English letters, that Paola came up with.
Example
    Input

    2
    bccddaaf
    saallaammddookkhhj

    Output

    bcdaf
    salamdokhj
*/