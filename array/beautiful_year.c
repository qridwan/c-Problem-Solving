#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    scanf("%d", &year);

    for (int nextYear = year + 1;; nextYear++)
    {
        int curYear = nextYear;
        int fr[10] = {0};
        bool repeat = false;
        while (curYear > 0)
        {
            int lastDigit = curYear % 10;
            curYear = curYear / 10;
            fr[lastDigit]++;
            if (fr[lastDigit] >= 2)
            {
                repeat = true;
                break;
            }
        }
        if (!repeat)
        {
            printf("%d\n", nextYear);
            break;
        }
    }

    return 0;
}

/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
Input

The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
Output

Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
Examples
Input
Copy

1987

Output
Copy

2013

Input
Copy

2013

Output
Copy

2014
*/