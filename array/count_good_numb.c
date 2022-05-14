#include <stdio.h>

int main()
{
    long long num;
    scanf("%lld", &num);
    long long tempNum = num;
    int goodNum = 0;
    while (tempNum > 0)
    {
        int lastNum = tempNum % 10;
        if (lastNum == 4 || lastNum == 7)
        {
            goodNum++;
        }
        tempNum /= 10;
        // printf("last numb%d numb=%d\n ", lastNum, tempNum);
    }
    if (goodNum == 4 || goodNum == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    // printf("%d good\n", goodNum);
    return 0;
}