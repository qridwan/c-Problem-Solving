#include <stdio.h>
struct Student
{
    char name[100];
    int id;
    int marks;
    int total;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        students[i];
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        for (int j = 0; j < i; j++)
        {
            if (students[i].id == students[j].id)
            {
                sum += students[j].marks;
            }
        }
        sum += students[i].marks;
        students[i].total = sum;
    }

    for (int i = 0; i < n; i++)
    {
        students[i];
        printf("name=%s roll=%d marks=%d total=%d\n", students[i].name, students[i].id, students[i].marks, students[i].total);
    }

    return 0;
}