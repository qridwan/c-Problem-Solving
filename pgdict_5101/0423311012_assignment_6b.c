#include <stdio.h>

// TASK:
// 	 	The program should
// 	 − take two Integers x and n as input from keyboard.
// 	 − use loop to find the value of x^n and display it.

int main()
{

	int x, n;
	printf("Enter x and n: ");
	scanf("%d %d", &x, &n);
	if (n > 0)
	{
		int result = 1;
		for (int i = 0; i < n; i++)
		{
			result *= x;
		}

		printf("%d^%d is =  %d\n", x, n, result);
	}
	else
		printf("Invalid input\n");

	return 0;
}