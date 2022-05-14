#include <stdio.h>
#include <string.h>

int main()
{
    char num[10];
    gets(num);
    int freq[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        char c = num[i];
        int digit = c - '0';
        freq[digit]++;
    }
    int ans;
    for (int i = 0; i < 9; i++)
    {
        if (freq[i] == 0)
        {
            ans = i;
        }
    }
    printf("%d", ans);

    return 0;
}

/*
You are given a string S of length exactly 9 consisting of digits. One but all digits from 0 to 9 appear exactly once in

S.

Print the only digit missing in

S.
Constraints

S is a string of length
9 consisting of digits.
All characters in

    S are distinct.

Input

Input is given from Standard Input in the following format:

S

Output

Print the only digit missing in
S.

========================
Sample Input 1

023456789

Sample Output 1

The string 023456789 only lacks
1.
Thus, 1 should be printed.
*/