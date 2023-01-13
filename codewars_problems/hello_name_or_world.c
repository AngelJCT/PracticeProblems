#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * hello-function to concatenate any name after Hello. Program to greet someone.
 * @name: pointer to string holding any name passed to it
 * Return: pointer to string with any name concatenate it to "Hello", or "Hello, World!" if the string is empty
 */
char *hello(const char *name)
{
	char *result = malloc(100); //buffer to store the new string.
	unsigned int i;

	//If the string is empty, print "Hello, World!".
	if (strlen(name) == 0)
	{
		sprintf(result, "Hello, World!");
	}
	//If the name start with lowercase character, convert it to uppercase or if the first letter is already upper, convert any letter after to lowercase. Apply to both cases.
	else if (islower(name[0]) || isupper(name[0]))
	{
		sprintf(result, "Hello, %c", toupper(name[0]));
		for (i = 1; i < strlen(name); i++)
		{
			sprintf(result, "%s%c", result, tolower(name[i]));
		}
		sprintf(result, "%s!", result);
	}
	return (result);
}
