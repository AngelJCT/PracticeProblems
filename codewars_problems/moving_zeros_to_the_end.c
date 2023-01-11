#include <stdio.h>
#include <stddef.h>
/**
 * move_zeros-move all the zeros in an array to the end, preserving the order of other elements
 * @len: size of array
 * @arr: array
 */
void move_zeros(size_t len, int arr[len])
{
	size_t i = 0;
	size_t j = 0;
	
	while (i < len)
	{
		if (arr[i] != 0)
		{
			arr[j] = arr[i];
			j++;
		}
		i++;
	}
	while (j < len)
	{
		arr[j] = 0;
		j++;
	}
}
//The function enters a while loop that continues running as long as i is less than len. This means that the loop will run for len iterations, effectively iterating through all the elements in the array.
//
//Inside the while loop, an if statement is used to check if the value at the i-th index of the array is equal to 0. If it is, the loop moves to the next iteration.
//
//If the value at the i-th index is not equal to 0, the value is assigned to the j-th index of the array. This effectively moves the non-zero value to the next position in the array. And then the value of j is incremented by 1.
//
//The value of i is incremented by 1, regardless of whether the value at the i-th index is 0 or not. This allows the loop to proceed to the next element in the array.
//
//The first while loop terminates once i is no longer less than len, and we are left with the non-zero elements in the first j position of the array.
//
//The second while loop that starts with variable j, this loop iterates as long as j is less than len.
//
//Inside the second loop, the code assigns 0 to the j-th index of the array, and then increments j by 1.
//
//The second loop is repeated for each remaining position of the array until j is no longer less than len.
//
//Finally the function terminates and the array now has all the non-zero elements to the left and zero to the right.
