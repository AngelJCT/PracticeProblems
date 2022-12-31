#include <stdio.h>
#include <string.h>
/**
 *remove_exclamation_marks-function to remove exclamation marks and store the resulting string
 *into buffer pointed by str_out.
 *@str_in: original string
 *@str_out: buffer to store the resulting string without exclamation marks
 */
void remove_exclamation_marks(const char *str_in, char *str_out)
{
	int i, j = 0;

	if (str_in == NULL)
		return;

	for (i = 0; str_in[i] != '\0'; i++)
	{
		if (str_in[i] != '!')
		{
			str_out[j++] = str_in[i];
		}
	}
	str_out[j] = '\0';
}
