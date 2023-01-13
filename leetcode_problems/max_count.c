#include <stdio.h>
/**
 * maximumCount - count positives and negatives number in an array
 * @nums: array
 * @numsSize: size of array
 * Return: if the count of positives is bigger than negatives, return positives. Else, otherwise
 */
int maximumCount(int* nums, int numsSize)
{
	int negatives = 0, positives = 0, count;

	for (count = 0; count < numsSize; count++)
	{
		if (nums[count] < 0)
		{
			negatives += 1;
		}
		if (nums[count] > 0)
		{
			positives += 1;
		}
	}
	if (positives < negatives)
		return (negatives);
	else
		return (positives);
}
