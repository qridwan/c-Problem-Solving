#include <stdio.h>

int main()
{

	int x, n;
	printf("Input the value of x: ");
	scanf("%d", &x);
	printf("Input number of terms: ");
	scanf("%d", &n);

	if (n > 0)
	{
		float result = 1;
		float factorial = 1;
		for (int i = 1; i <= n; i++)
		{
			factorial *= i;
			result += (float)(x ^ i) / factorial; // to get float result
		}

		printf("The sum is : %f\n", result);
	}
	else
		printf("Invalid input\n");

	return 0;
}

// TASK::  Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
//  Test Data :
//  Input the value of x :3
//  Input number of terms : 5
//  Expected Output :
//  The sum is : 16.375000