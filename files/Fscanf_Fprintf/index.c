#include <stdio.h>

int main()
{

    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL)
    {
        // inputFile = fopen("input.txt", "w");
        // fprintf(inputFile, "0");
        fprintf(outputFile, "NOT FOUND");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    fprintf(outputFile, "sum = %d\n", sum);

    return 0;
}