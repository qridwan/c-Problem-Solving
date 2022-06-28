#include <stdio.h>
#include <stdbool.h>
struct Date
{
    int day;
    int month;
    int year;
};

bool isFirstDayOfMonth(struct Date date)
{
    return date.day == 1 && date.month == 1;
};
void printDate(struct Date date)
{
    printf("%d %d %d\n", date.day, date.month, date.year);
}
struct Date getFirstDay(int year)
{
    struct Date ans = {1, 1, year};
    return ans;
};
int main()
{
    struct Date date = {1, 3, 2024};
    if (isFirstDayOfMonth(date))
    {
        printf("Happy New Year\n");
    };
    struct Date fDate = getFirstDay(date.year);
    printDate(fDate);
    return 0;
}