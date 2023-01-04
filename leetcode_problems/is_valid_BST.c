#include <limits.h>
#include <stddef.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool is_BST(struct TreeNode *root, long int min_val, long int max_val);
/**
 *isValidBST-functo to check if it is a valid binary search tree
 *@root: pointer to head node
 *Return: true if it is valid, false otherwise
 */
bool isValidBST(struct TreeNode *root)
{
	//Check the entire BST using the full range of valid values.
	return (is_BST(root, LONG_MIN, LONG_MAX));
}
/**
 *isBST-helper function tha use in-order traversal to check if the key values are in ascending order
 *@root: pointer to head node
 *@min_val: minimum longer value
 *@max_val: maximum longer value
 *Return: true if the values are in ascending order, false otherwise
 */
bool is_BST(struct TreeNode *root, long int min_val, long int max_val)
{
	if (root == NULL)
		return (true);

	//Check that the value in this node falls within the valid range.
	if (root->val <= min_val || root->val >= max_val)
		return (false);

	//Recursively check the left and right subtrees, using the updated range.
	return (is_BST(root->left, min_val, root->val) && is_BST(root->right, root->val, max_val));
}
