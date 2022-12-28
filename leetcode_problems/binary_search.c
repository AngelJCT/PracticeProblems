#include <stdio.h>
#include <stdlib.h>
/**
 *search-function to search for an element using binary search algorithm
 *@nums: array
 *@numsSize: size of array
 *@target: element to search for
 *Return: index at which element is found, -1 otherwise
 */
int search(int* nums, int numsSize, int target)
{
	int high = numsSize - 1; //Initializing high at highest element in the array.
	int low = 0; //Initializing low at lowest element in the array.
	int mid;

	while (high >= low) //The >= helps if the array is one element and the target is the same.
	{
		mid = (low + high) / 2; //Initializing mid at the element in the middle of the array.
		if (target == nums[mid])
		{
			return mid;
		}
		else if (target > nums[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
