#include <stdio.h>

int main()
{
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen("habijabi.txt", "r");
    if (inputFile == NULL)
    {
        fprintf(logFile, "INPUT FILE NOT FOUND\n");
    }
    // fprintf(logFile, "HELLO at 7:10 AM\n");
    return 0;
}