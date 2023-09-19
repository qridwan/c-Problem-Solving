// Online C compiler to run C program online
#include <stdio.h>

int main()
{
	int arr[] = {3, 6, 2, 4, 9};
	int size = sizeof(arr) / sizeof(arr[0]);

	int sorted[size];

	for (int i = 0; i < size; i++)
	{
		sorted[i] = arr[i];
	}

	for (int step = 0; step < size - 1; step++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	};

	for (int step = 0; step < size - 1; step++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (sorted[i] < sorted[i + 1])
			{
				int temp = sorted[i];
				sorted[i] = sorted[i + 1];
				sorted[i + 1] = temp;
			}
		}
	};

	int newArr[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i] + sorted[i];
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", sorted[i]);
	}

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", newArr[i]);
	}

	return 0;
}