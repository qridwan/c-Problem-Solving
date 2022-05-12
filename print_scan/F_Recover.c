#include <stdio.h>
// Mokbul has two sons - Abul and Babul. Mokbul remembers Abul's age but has forgotten Babul's age. But he remembers their average age. Help Mokbul remember Babul's Age.
int main()
{
    int abuls_age, average;
    scanf("%d %d", &abuls_age, &average);
    printf("%d\n", (2 * average) - abuls_age);
    return 0;
}