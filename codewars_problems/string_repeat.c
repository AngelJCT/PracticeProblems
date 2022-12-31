#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *repeat_str-function to repeat a string n times
 *@count: number of times to repeat
 *@src: original string
 *Return: copy of destination string repeated
 */
char *repeat_str(size_t count, const char *src)
{
	char *dest = malloc(count * strlen(src) + 1);

	if (dest == NULL)
		return NULL;

	char *p = dest;

	for (size_t i = 0; i < count; i++)
	{
		p = stpcpy(p, src);
	}

	return (dest);
}
