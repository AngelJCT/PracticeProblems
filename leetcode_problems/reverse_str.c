#include <string.h>
/**
 *reverseString-function to reverse a string
 *@s: string
 *@sSize: size of string
 */
void reverseString(char *s, int sSize)
{
	int i;
	char temp;

	if (s == NULL)
	{
		return;
	}

	for (i = 0; i < sSize / 2; i++)
	{
		temp = s[i];
		s[i] = s[sSize - 1 - i];
		s[sSize - 1 - i] = temp;
	}
}
