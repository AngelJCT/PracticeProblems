#include <stdio.h>
#include <string.h>
/**
 *reverseStr-function to reverse every 2k characters from a string
 *@s: string
 *@k: number of characters
 *Return: string with characters reversed
 */
char * reverseStr(char *s, int k)
{
	int i, left, right;
	char temp;
	size_t len;

	if (s == NULL)
	{
		return NULL;
	}
	len = strlen(s);
	//The loop starts the i in 0 and then in each iteration jumps every 2 characters
	//and reverse them starting with the first two characters.
	for (i = 0; i < len - 1; i += 2 * k)
	{
		//Then it sets left as the first character of the string and right as the last.
		left = i;
		right = i + k - 1;
		//The code checks if right is greater than the length of the string s. If it is,
		//then right is set to the last index of the string. This is to ensure that the loop
		//does not go out of bounds if the last block is shorter than k characters.
		if (right > len - 1)
		{
			right = len - 1;
		}
		//As long this statements continue to be true, it will swap every two characters in the string.
		while (right > left)
		{
			temp = s[left];
			s[left] = s[right];
			s[right] = temp;
			left++;
			right--;
		}
		//When the inner loop is finished, the outer loop continues to the next iteration,
		//processing the next block of 2 * k characters.
	}
	return s;
}
