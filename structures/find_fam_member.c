#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Family
{
    char first[21];
    char second[21];
};

int main()
{
    int num;
    scanf("%d", &num);
    struct Family Families[num];
    struct Family UniqFams[num];
    int k = 0;

    for (int i = 0; i < num; i++)
    {
        Families[i];
        scanf("%s %s", Families[i].first, Families[i].second);
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            int con1 = strcmp(Families[i].first, UniqFams[j].first);
            int con2 = strcmp(Families[i].second, UniqFams[j].second);
            // printf("f1=%s f2=%s u1=%s u2=%s\n", Families[i].first, Families[i].second, UniqFams[j].first, UniqFams[j].second);

            if (con1 == 0 && con2 == 0)
            {
                found = true;
            }
        }
        if (found == false)
        {
            strcpy(UniqFams[k].first, Families[i].first);
            strcpy(UniqFams[k].second, Families[i].second);
            k++;
        }
    }

    if (k == num)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}

/*


    There are NNN people in Artland .Bitman want to know about their name. But in Artland database there may available duplicate name. The family name and given name of the iii-th person (1≤i≤N)(1 \leq i \leq N)(1≤i≤N) are SiS_iSi​ and TiT_iTi​, respectively.

    Determine whether there is a pair of people with the same family and given names. In other words, determine whether there is a pair of integers (i,j)(i,j)(i,j) such that 1≤i<j≤N1 \leq i \lt j \leq N1≤i<j≤N, Si=SjS_i=S_jSi​=Sj​, and Ti=TjT_i=T_jTi​=Tj​.
Constraints

        2≤N≤10002 \leq N \leq 10002≤N≤1000
        NNN is an integer.
        Each of SiS_iSi​ and TiT_iTi​ is a string of length between 111 and 202020 (inclusive) consisting of English lowercase letters.

Input

    Input is given from Standard Input in the following format:

    NNN
    S1S_1S1​ T1T_1T1​
    S2S_2S2​ T2T_2T2​
    ⋮\hspace{0.6cm}\vdots⋮
    SNS_NSN​ TNT_NTN​

Output

    If there is a pair of people with the same family and given names, print Yes; otherwise, print No.


INPUT: 
3
tanaka taro
sato hanako
tanaka taro

OUTPUT: 
Yes

Input:
3
saito ichiro
saito jiro
saito saburo

OUTPUT:
No

*/