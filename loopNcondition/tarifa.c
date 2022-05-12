#include <stdio.h>

int main()
{
    int monthly_mb, loop, remain_mb, limited_mb;
    scanf("%d\n %d\n", &monthly_mb, &loop);
    remain_mb = 0;
    limited_mb = monthly_mb;
    for (int i = 1; i <= loop; i++)
    {
        int used_mb;
        scanf("%d", &used_mb);
        remain_mb = limited_mb - used_mb;
        limited_mb = monthly_mb + remain_mb;
    }
    printf("%d\n", limited_mb );

    return 0;
}

/*
Pero has negotiated a Very Good data plan with his internet provider. The provider will let Pero use up XX megabytes to surf the internet per month. Each megabyte that he doesn’t spend in that month gets transferred to the next month and can still be spent. Of course, Pero can only spend the megabytes he actually has.

If we know how much megabytes Pero has spent in each of the first NN months of using the plan, determine how many megabytes Pero will have available in the N + 1N+1 month of using the plan.

Input
The first line of input contains the integer XX (1 \leq X \leq 1001≤X≤100). The second line of input contains the integer NN (1 \leq N \leq 1001≤N≤100). Each of the following NN lines contains an integer P_ iP
i
​
  (0 \leq P_ i \leq 10\, 0000≤P
i
​
 ≤10000), the number of megabytes spent in each of the first NN months of using the plan. Numbers P_ iP
i
​
  will be such that Pero will never use more megabytes than he actually has.

Output
The first and only line of output must contain the required value from the task.
*/