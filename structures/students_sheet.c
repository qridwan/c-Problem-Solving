#include <stdio.h>
struct Student
{
    int roll;
    int class;
    int marks;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        students[i];
        scanf("%d %d %d", &students[i].roll, &students[i].class, &students[i].marks);
        sum += students[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        students[i];
        printf("class=%d roll=%d marks=%d total=%d\n", students[i].class, students[i].roll, students[i].marks, sum);
    }

    return 0;
}


    
       

