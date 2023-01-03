#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 *maxDepth-function to find the maximum depth of binary tree
 *@root: pointer to head node(root)
 *Return: maximum depth
 */
/*A binary tree's maximum depth is the number of nodes along the longest path from the root node
 *down to the farthest leaf node.
 *The function works by recursively calling itself on the left and right child nodes of the
 *current node. It then compares the depths of the left and right subtrees and returns the larger of the
 *two, plus 1 to account for the current node. If the node is NULL, the function returns 0. This is
 *the base case that stops the recursion.
 */
int maxDepth(struct TreeNode *root)
{
	int right_depth, left_depth;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		left_depth = maxDepth(root->left);
		right_depth = maxDepth(root->right);
		if (left_depth > right_depth)
		{
			return (left_depth + 1);
		}
		else
		{
			return (right_depth + 1);
		}
	}
}
