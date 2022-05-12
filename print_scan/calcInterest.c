#include <stdio.h>
/*
Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
Example

Input
Enter principle: 1200
Enter time: 2
Enter rate: 5.4
Output
Simple Interest = 129.600006
*/
int main()
{
    int principal, time, rate;
    float simple_interest, total_with_principal;
    printf("Enter principle: ");
    scanf("%d", &principal);
    printf("Enter time(year): ");
    scanf("%d", &time);
    printf("Enter rate(in percentage): ");
    scanf("%d", &rate);
    simple_interest = (principal * time * rate) / 100;
    total_with_principal = simple_interest + principal;
    printf("Total with principal %.2f\n Interest rate= %.2f\n", total_with_principal, simple_interest);
    return 0;
}