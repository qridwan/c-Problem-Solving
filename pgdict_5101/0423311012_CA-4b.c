// Write a C program named student ID_CA-4b.c to check an input character
//  is a vowel or a consonant.
//  ❑ The program should
//  ➢ Ask the user to input a character.
//  ➢ Store the input character in a variable.
//  ➢ Check and output whether the input character is a vowel or consonant

#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		printf("%c is a vowel\n", c);
	}
	else
	{
		printf("%c is a consonant\n", c);
	}
	return 0;
}