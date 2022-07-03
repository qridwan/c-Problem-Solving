#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    struct Student s1 = {"RAKIB", .marks = 91, .roll = 1};
    // strcpy(s1.name, "Akib"); //to change char in struct
    printf("Name- %s Roll- %d Marks- %d\n", s1.name, s1.roll, s1.marks);
    return 0;
}