#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Student Highest = {.marks = 0};
    for (int i = 0; i < n; i++)
    {
        struct Student s1;
        scanf("%s %d %d", &s1.name, &s1.roll, &s1.marks);
        if (s1.marks > Highest.marks)
        {
            Highest = s1;
        }
    }

    printf("HIghest ===> %s Rol- %d Marks- %d\n", Highest.name, Highest.roll, Highest.marks);
    return 0;
}