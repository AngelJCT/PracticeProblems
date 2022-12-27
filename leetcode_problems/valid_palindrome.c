#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *isPalindrome-function to check if a string is palindrome
 *@s: string
 *Return: true if the string is palindrome, false otherwise
 */
bool isPalindrome(char * s)
{
	int i, j;

	if (s == NULL)
		return (false);

	i = 0; //i will iterate from first character
	j = strlen(s) - 1; //j will iterate from last character
	while (j > i)
	{
		//isalnum function will check if the argument passed is an alphanumeric character.
		//It will skip those who are not(commas, spaces, etc).
		//If is not alphanumeric, keep iterating.
		if (!isalnum(s[i]))
		{
			i++;
			continue;
		}
		if (!isalnum(s[j]))
		{
			j--;
			continue;
		}
		//tolower function converts an uppercase alphabet to lowercase so it can be palindrome.
		if (tolower(s[i++]) != tolower(s[j--]))
		{
			return (false);
		}
	}
	return (true);
}
