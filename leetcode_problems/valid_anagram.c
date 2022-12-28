#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
void sort_string(char *str);
int compare_characters(const void *a, const void *b);
int compare_strings(const char *s1, const char *s2);
/**
 *isAnagram-function to check if the seccond string is an anagram of the first
 *@s: original string
 *@t: string to verify if its an anagram
 *Return: true if its an anagram, false otherwise
 */
bool isAnagram(char *s, char *t)
{
	if (s == NULL && t == NULL)
	{
		return (false);
	}
	sort_string(s);
	sort_string(t);

	if (compare_strings(s, t) == 0)
	{
		return (false);
	}
	return (true);
}
//function to sort strings using quick sort algorithm
void sort_string(char *str)
{
	int len = strlen(str);

	qsort(str, len, sizeof(char), compare_characters);
}
//comparison function for qsort
int compare_characters(const void *a, const void *b)
{
	char c1 = *(char *)a;
	char c2 = *(char *)b;

	return (tolower(c1) - tolower(c2));
}
//function to compare two strings (case-insensitive)
int compare_strings(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (tolower(*s1) != tolower(*s2))
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}
