#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    // checking input file -> good practice
    if (inputFile == NULL)
    {
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outputFile, "%d\n", n);

    // closing all files -> good practice
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}