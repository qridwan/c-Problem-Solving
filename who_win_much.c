#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);
    int Anton = 0;
    int Danik = 0;

    while (loop >= 0)
    {
        char Ch;
        scanf("%c", &Ch);
        int iC = Ch;
        if (iC == 65)
        {
            Anton++;
        }
        else if (iC == 68)
        {
            Danik++;
        }
        loop--;
    }
    // printf("A=%d D=%d", Anton, Danik);

    if (Anton == Danik)
    {
        printf("Friendship\n");
    }
    else if (Anton > Danik)
    {
        printf("Anton\n");
    }
    else
    {
        printf("Danik\n");
    }

    return 0;
}