
#include <stdio.h>
void sortMaxtoMin(int *a, int n)
{
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (a[check] > a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
};

int main()
{
    int loop;
    scanf("%d", &loop);
    for (int i = 0; i < loop; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sortMaxtoMin(arr, n);
        int res = arr[0] - arr[1];
        for (int i = 1; i < n - 1; i++)
        {
            int diff = arr[i] - arr[i + 1];
            if (diff < res)
                res = diff;
        }
        printf("%d\n", res);
    }

    return 0;
}
/*
    There are nnn athletes in front of Jack. Athletes are numbered from 111 to nnn from left to right. Jack knows the strength of each athlete — the athlete number iii has the strength sis_isi​.

    Jack want to split all athletes into two teams. Each team must have at least one athlete, and each athlete must be exactly in one team.

    Jack want the strongest athlete from the first team to differ as little as possible from the weakest athlete from the second team. Formally, Jack want to split the athletes into two teams AAA and BBB so that the value ∣max⁡(A)−min⁡(B)∣|\max(A) - \min(B)|∣max(A)−min(B)∣ is as small as possible, where max⁡(A)\max(A)max(A) is the maximum strength of an athlete from team AAA, and min⁡(B)\min(B)min(B) is the minimum strength of an athlete from team BBB.

    For example, if n=5n=5n=5 and the strength of the athletes is s=[3,1,2,6,4]s=[3, 1, 2, 6, 4]s=[3,1,2,6,4], then one of the possible split into teams is:

        first team: A=[1,2,4]A = [1, 2, 4]A=[1,2,4],
        second team: B=[3,6]B = [3, 6]B=[3,6].

    In this case, the value ∣max⁡(A)−min⁡(B)∣|\max(A) - \min(B)|∣max(A)−min(B)∣ will be equal to ∣4−3∣=1|4-3|=1∣4−3∣=1. This example illustrates one of the ways of optimal split into two teams.

    Print the minimum value ∣max⁡(A)−min⁡(B)∣|\max(A) - \min(B)|∣max(A)−min(B)∣.
Input

    The first line contains an integer ttt (1≤t≤10001 \le t \le 10001≤t≤1000) — the number of test cases in the input. Then ttt test cases follow.

    Each test case consists of two lines.

    The first line contains positive integer nnn (2≤n≤502 \le n \le 502≤n≤50) — number of athletes.

    The second line contains nnn positive integers s1,s2,…,sns_1, s_2, \ldots, s_ns1​,s2​,…,sn​ (1≤si≤10001 \le s_i \le 10001≤si​≤1000), where sis_isi​ — is the strength of the iii-th athlete. Please note that sss values may not be distinct.
Output

    For each test case print one integer — the minimum value of ∣max⁡(A)−min⁡(B)∣|\max(A) - \min(B)|∣max(A)−min(B)∣ with the optimal split of all athletes into two teams. Each of the athletes must be a member of exactly one of the two teams.
*/