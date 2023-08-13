// Write a C program named student ID_CA-4a.c to check whether a year is
// a leap year or not.
//  The program should
// ➢ Ask the user to input a year.
// ➢ Store the input year in a variable.
// ➢ Check and output whether the input year is odd or even.
// ➢ Also check and output whether the year is a leap year or not

#include <stdio.h>

int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if (year % 2 == 0)
	{
		printf("%d is an even year\n", year);
	}
	else
	{
		printf("%d is an odd year\n", year);
	}

	if (year % 4 == 0)
	{
		printf("%d is a leap year\n", year);
	}
	else
	{
		printf("%d is not a leap year\n", year);
	}

	return 0;
}