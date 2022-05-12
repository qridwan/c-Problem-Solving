#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);

    for (int i = 1; i <= loop; i++)
    {
        int add_profit, add_amount, add_cost, without_add_profit;
        scanf("%d %d %d", &without_add_profit, &add_amount, &add_cost);
        add_profit = add_amount - add_cost;
        if (add_profit > without_add_profit)
        {
            printf("advertise\n");
        }
        else if (add_profit < without_add_profit)
        {
            printf("do not advertise\n");
        }
        else
        {
            printf("does not matter\n");
        }
    }
    return 0;
}

// You are the CEO of Nasty Hacks Inc., a company that creates small pieces of malicious software which teenagers may use to fool their friends. The company has just finished their first product and it is time to sell it. You want to make as much money as possible and consider advertising in order to increase sales. You get an analyst to predict the expected revenue, both with and without advertising. You now want to make a decision as to whether you should advertise or not, given the expected revenues.

// Input

// The input consists of nn cases, and the first line consists of one positive integer giving nn. The next nn lines each contain 33 integers, rr, ee and cc. The first, rr, is the expected revenue if you do not advertise, the second, ee, is the expected revenue if you do advertise, and the third, cc, is the cost of advertising. You can assume that the input will follow these restrictions: 1 \le n \le 1001≤n≤100, -10^{6} \leq r,e \leq 10^{6}−10
// 6
//  ≤r,e≤10
// 6
//   and 0 \leq c \leq 10^{6}0≤c≤10
// 6
//  .

// Output
// Output one line for each test case: “advertise”, “do not advertise” or “does not matter”, indicating whether it is most profitable to advertise or not, or whether it does not make any difference.