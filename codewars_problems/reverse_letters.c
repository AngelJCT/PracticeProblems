#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *reverse_letter-function to reverse a string and omits non-alphanumeric characters and numbers
 *@str: string to reverse
 *Return: string reversed with no numbers and non-alphanumeric characters
 */
char *reverse_letter(const char *str)
{
	size_t count = 0;
	char *result;

	if (str == NULL)
		return (NULL);

	//First, count the number of alphabetic charcaters in the string.
	for (const char *p = str; *p != '\0'; p++)
	{
		if (isalpha(*p))
		{
			count++;
		}
	}

	//Allocate a new string to hold the reversed alphabetic characters.
	result = malloc(count + 1);
	if (result == NULL)
		return (NULL);

	char *q = result;

	//Copy the alphabetic characters to the new string in reverse order.
	for (const char *p = str + strlen(str) - 1; p >= str; p--)
	{
		if (isalpha(*p))
		{
			*q++ = *p;
		}
	}

	*q = '\0';
	return (result);
}
