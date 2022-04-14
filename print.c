#include <stdio.h>
// Write a C program to print your name, date of birth. and mobile number.
// Expected Output:
// Name  : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999

int main()
{
    char name[80], dob[100];
    int phoneNumber;
    printf("ENTER YOUR NAME: ");
    scanf("%[^\n]%*c", &name);
    printf("Enter YOUR BOD: ");
    scanf("%[^\n]%*c", &dob);
    printf("Enter YOUR PHONE NUMBER: ");
    scanf("%d", &phoneNumber);
    printf("Name : %s\nDOB : %s\nMobile : %d\n", name, dob, phoneNumber);
    return 0;
}