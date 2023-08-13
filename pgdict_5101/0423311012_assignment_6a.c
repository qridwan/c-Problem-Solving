#include <stdio.h>

int main()
{
	// Task 1
	// Write a program named assignment 6a.c
	// # The program should
	// − take an Integer n as input from keyboard.
	// − use loop to find the factorial of n and display it.

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n > 0)
	{
		int factorial = 1;
		for (int i = 1; i <= n; i++)
		{
			factorial *= i;
		}

		printf("%d\n", factorial);
	}
	else
		printf("Invalid input\n");

	return 0;
}