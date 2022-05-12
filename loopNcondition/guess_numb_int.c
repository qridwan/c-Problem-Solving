#include <stdio.h>
/*


    How many integers not less than AAA and not more than BBB are there?
Constraints

        1≤A≤1001 \leq A \leq 1001≤A≤100
        1≤B≤1001 \leq B \leq 1001≤B≤100
        AAA and BBB are integers.

Input

    Input is given from Standard Input in the following format:

    A B

Output

    Print the number of integers not less than A and not more than B.

*/
int main()
{
    int smallNumb, largeNumb;
    scanf("%d %d", &smallNumb, &largeNumb);
    int result = 0;

    for (int i = smallNumb; i <= largeNumb; i++)
    {
        result++;
    };
    printf("%d\n", result);
    return 0;
}