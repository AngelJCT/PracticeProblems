#include <stdbool.h>
/**
 *isPalindrome-check if a number is palindrome
 *@x: number to check
 *Return: true if its palinrome, false otherwise
 */
bool isPalindrome(int x)
{
	long int reversed = 0; //variable to store he reversed number and long to avoid integer overflow
	int original = x; //variable to store the origianl number to compare later
	int remainder; //variable to store the remainder of the original number and add it to the reversed number

	while (x > 0)
	{
		remainder = x % 10; //this will divide x by 10 and store the remainder in raminder variable
		reversed = reversed * 10 + remainder; //this will append the remainder to reversed multiplied by 10
		x /= 10; //this division will remove the last digit of x and store it in x
	}
	if (original == reversed)
	{
		return (true);
	}
	 return (false);
}
