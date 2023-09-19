#include <stdio.h>

int main()
{

	char str[100];
	printf("Enter a string limit is 100 characters : ");
	scanf("%s", str);
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	for (int i = size - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	int isPalindrome = 1;
	for (int i = 0; i < size / 2; i++)
	{
		if (str[i] != str[size - i - 1])
		{
			isPalindrome = 0;
			break;
		}
	}
	if (isPalindrome)
	{
		printf("Palindrome: Yes\n");
	}
	else
	{
		printf("Palindrome: No\n");
	}

	return 0;
}

/*
	Write a program named Roll_8.c
• The program should take a string save it in an array
• The program should have a function, reverseString(char *inStr), which will take a string as input and reverses the string.
• The program should output the reversed string.
• The program should output if the input is a palindrome.
• Example:
− Input = madam
− Reverse: madam − Palindrome: Yes
	*/