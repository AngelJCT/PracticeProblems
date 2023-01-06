#include <sys/types.h>
#include <string.h>
/**
 * find_short-finds the shortest word in a string
 * @s: string to search
 * Return: the length of the shortest word, or 0 if the string is empty
 */
ssize_t find_short(const char *s)
{
	size_t i, start, shortest, length;

	shortest = ~(size_t)0; //maximum value of size_t type
	start = 0; //starting index of current word

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
    {
		if (s[i] == ' ') //if character is a space
		{
			length = i - start; //length of current word
			if (length < shortest)
			{
				shortest = length;
			}
			start = i + 1; //start next word after space
		}
	}
	//check last word in string
	length = i - start;
	if (length < shortest)
	{
		shortest = length;
	}
	return (shortest);
}

/*This function declares the variables shortest, start, and i to store the length of the shortest word found so far, the starting index of the current word being processed, and the current index in the string, respectively.
 *It then uses a loop to iterate over the characters in the string. If the current character is a space, the function calculates the length of the current word using start and the index of the space, and updates shortest if necessary. The function then sets start to the index of the space plus one, to start the next word at the character after the space.
 *After the loop exits, the function checks the last word in the string and updates shortest if necessary. Finally, it returns the value of shortest.*/
