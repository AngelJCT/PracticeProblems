#include <string.h>
/**
 *reverseString-function to reverse a string
 *@s: string
 *@sSize: size of string
 */
void reverseString(char* s, int sSize)
{
	char *p = s; //pointer to first character of string
	char *q = s + sSize - 1; //pointer to last character of string
	char tmp;

	while (p < q)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
		p++;
		q--;
	}
}
