#include <stdlib.h>
#include <stdio.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes)
{
	int **result = malloc(sizeof(int *) * 1000);

	*returnColumnSizes = malloc(sizeof(int) * 1000);
	*returnSize = 0;

	// base case
	if (root == NULL)
		return (result);

	// queue to store nodes
	struct TreeNode *queue[1100];
	int front = 0, rear = 0; // front and rear indices

	// enqueue root and initialize height
	queue[rear++] = root;
	// level order traversal loop
	while (front < rear)
	{
		int size = rear - front;

		// allocate memory for current level
		(*returnColumnSizes)[*returnSize] = size;
		result[*returnSize] = malloc(sizeof(int) * size);
		// traverse current level and enqueue nodes of
		for (int i = 0; i < size; i++)
		{
			// dequeue front node and enqueue its children
			struct TreeNode *node = queue[front++];

			// print front node and enqueue its children
			result[*returnSize][i] = node->val;
			if (node->left != NULL)
				queue[rear++] = node->left; // enqueue left child
			if (node->right != NULL)
				queue[rear++] = node->right; // enqueue right child
		}
		(*returnSize)++; // increment number of levels
	}
	return (result); // return level order traversal
}
/*This code is implementing a breadth-first search (BFS) algorithm to traverse a binary tree and store the values of its nodes in a 2D array.

Here is a step-by-step explanation of the code:

The code starts by defining a struct called TreeNode which represents a node in a binary tree. This struct has three fields: val, which stores the value of the node; left, which is a pointer to the left child of the node; and right, which is a pointer to the right child of the node.

The function levelOrder() is defined next. It takes three arguments: a pointer to the root node of the tree (root), a pointer to an integer that will be used to store the size of the returned array (returnSize), and a double pointer to an integer that will be used to store the sizes of the arrays in the returned 2D array (returnColumnSizes). The function returns a 2D array that contains the values of the nodes in the tree, organized by level.

The first two lines of the function allocate memory for two arrays: result and *returnColumnSizes. result is a 2D array that will store the values of the nodes in the tree, and *returnColumnSizes is an array that will store the number of nodes at each level of the tree. Both arrays are initialized to have a size of 1000.

If the root node of the tree is NULL, the function returns the empty result array.

The next line declares a queue data structure called queue that will be used to store the nodes of the tree as they are traversed in the BFS algorithm. This queue is implemented using an array with a size of 1100.

The variables front and rear are initialized to 0. These variables will be used to keep track of the front and rear of the queue as nodes are added and removed from the queue.

The root node of the tree is added to the queue by setting queue[rear++] = root.

The while loop begins. It will continue until front is equal to rear, which indicates that the queue is empty and all nodes in the tree have been traversed.

Within the while loop, the variable size is set to the difference between rear and front. This size variable represents the number of nodes in the current level of the tree that are stored in the queue.

The next line stores the value of size in the *returnColumnSizes array at the index *returnSize. This stores the number of nodes at the current level in the tree.

The result array is allocated memory for a new row, with a size equal to size. This row will be used to store the values of the nodes in the current level of the tree.

The for loop begins. It will iterate size times, once for each node in the current
