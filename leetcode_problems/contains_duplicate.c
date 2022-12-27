#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b);
/**
 *containsDuplicate-function to check if a number in the array is duplicate it. O(n log n)
 *@nums: pointer to array
 *@numsSize: size of array
 *Return: true if there is a duplicated number, false otherwise
 */
bool containsDuplicate(int* nums, int numsSize)
{
	int i;

	if (numsSize < 2)
	{
		return false;
	}

	//Function that sorts the array. It receives pointer to the first element of the array to be sorted.
	//Number of elements in the array. Size in bytes(sizeof function) of each element in the array.
	//Function that compare two elements.
	qsort(nums, numsSize, sizeof(nums[0]), compare);

	for (i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			return (true);
		}
	}
	return (false);
}
/**
 *compare-function to compare integers. Also mandatory for qsort function
 *@a: firts integer to compare
 *@b: second integer to compare
 *Return: elements compared
 */
int compare(const void *a, const void *b)
{
	int x = *(int*)a;
	int y = *(int*)b;

	return (x - y);
	/*also return (*(int*)a - *(int*)b);*/
}
