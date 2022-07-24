#include <stdio.h>
#include <string.h>
int calcSweet(int aCount, int others, int strLen)
{
    int formula = (2 * aCount) - 1;
    // printf("formula %d, others %d, len %d\n", formula, others, strLen);
    int halflen = strLen / 2;
    if (strLen < formula)
    {
        // printf("strLn");
        return strLen;
    }
    else if ((aCount <= others) || (aCount < halflen))
    {
        // printf("formula");
        return formula;
    }
}
int main()
{
    char str[51];
    scanf("%s", str);
    int strLen = strlen(str);
    int aCount = 0;
    int others = 0;
    for (int i = 0; i < strLen; i++)
    {
        if (str[i] == 'a')
        {
            aCount++;
        }
        else
            others++;
    }
    int answer = calcSweet(aCount, others, strLen);

    printf("%d\n", answer);

    return 0;
}
