#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int arr[50];
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		int genRandomNumber = rand() % 1000;
		arr[i] = genRandomNumber < 100 ? genRandomNumber + 100 : genRandomNumber;
	}
	for (int i = 0; i < 50; i++)
	{
		printf("%d\n", arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	for (int i = 0; i < 50; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
		sum += arr[i];
	}
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Sum: %d\n", sum);
	printf("Average: %f\n", (float)sum / 50);

	return 0;
}