#include <stdio.h>

int main()
{
	int arr[] = {6, 5, 3, 2, 7};

	int size = 5;

	// for (int i = 0; i < size / 2; i++)
	// {
	// 	int temp = arr[i];
	// 	arr[i] = arr[size - i - 1];
	// 	arr[size - i - 1] = temp;
	// }
	for (int i = 5 - 1; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
		int temp = arr[size - i];
		arr[size - i] = arr[i - 1];
		arr[size - i] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}