#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    char name[100];
    bool inp = true;

    scanf("%s", name);
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        // printf("%c\n", name[i]);
        if (!islower(name[i]))
        {
            inp = false;
        }
    }
    for (int i = 0; i < len; i++)
    {
        // sorting the string
        int temp;
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] > name[j])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    int distChar = 0;
    // counting the distinct characters
    for (int i = 0; i < len; i++)
    {
        while (i < len - 1 && name[i] == name[i + 1])
        {
            i++;
        }
        distChar++;
    }
    // printf("inp %d distChar=%d\n", inp, distChar);
    if (inp)
    {
        if (distChar % 2 == 0)
        {
            printf("CHAT WITH HER!\n");
        }
        else
        {
            printf("IGNORE HIM!\n");
        }
    }

    return 0;
}

/*
    Mahir sent a friend request to a girl's profile with a pretty profile picture only to find out it was a fake account handled by a boy. He is tired of dealing with fake accounts and asks for your help to recognize the fake id.

    You are provided with the username of the profile that Mahir encounters. You have to find if it is the profile of a girl or a boy. The way to distinguish between the account of boy and girl depends on the number of distinct characters in the username. If this number is odd, the profile is of a boy otherwise it is of a girl.
Input

    The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.
Output

    If the account belongs to a girl, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
Examples
    Input

    rajkonna

    Output

    CHAT WITH HER!

    Input

    yamin

    Output

    IGNORE HIM!
*/