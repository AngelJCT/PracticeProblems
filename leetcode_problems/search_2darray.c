#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *searchMatrix-function to search a 2d array using binary search
 *@matrix: 2d array(matrix)
 *@matrixSize: size of matrix(m x n)
 *@matrixColSize: size of each element
 *@target: element to be searched
 *Return: true if target element exist in matrix, false otherwise
 */
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
	int i = 0, j = matrixColSize[0] - 1;

	while (i < matrixSize && j >= 0)
	{
		if (matrix[i][j] == target)
		{
			return true;
		}
		else if (matrix[i][j] > target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return false;
}
