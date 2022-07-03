#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Student
{
    char name[100];
    int id;
    int marks;
};

struct Uniq_student
{
    char name[100];
    int id;
    int total;
};
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "FILE NOT FOUND\n");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    struct Student students[n];
    struct Uniq_student uniq_students[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (students[i].id == uniq_students[j].id)
            {
                uniq_students[j].total += students[i].marks;
                found = true;
            }
        }
        if (found == false)
        {
            strcpy(uniq_students[k].name, students[i].name);
            uniq_students[k].total = students[i].marks;
            uniq_students[k].id = students[i].id;
            k++;
        }
    }

    // sorting ac to total marks , highest to lowest
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (uniq_students[i].total < uniq_students[j].total)
            {
                struct Uniq_student temp = uniq_students[i];
                uniq_students[i] = uniq_students[j];
                uniq_students[j] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        fprintf(outputFile, "name=%s roll=%d  total=%d\n", uniq_students[i].name, uniq_students[i].id, uniq_students[i].total);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}