#include <stdio.h>
#include <stdbool.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 *isSameTree-function to check if two binary trees are the same
 *@p: pointer to head node of first tree
 *@q: pointer to head node of second tree
 *Return: true if are the same, false otherwise
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	//If both are empty, then is true
	if (p == NULL && q == NULL)
	{
		return (true);
	}
	//If one of them is empty, then is false
	if (p == NULL || q == NULL)
	{
		return (false);
	}
	//If the nodes value are not the same, then is false
	if (p->val != q->val)
	{
		return (false);
	}
	//Call the function recursively to check if the structure of each tree are the same
	return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
