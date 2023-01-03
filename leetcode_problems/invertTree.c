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
/*invertTree-function to invert binary tree
 *@root: pointer to head node(root)
 *Return: root with nodes inverted
 */
struct TreeNode* invertTree(struct TreeNode* root)
{
	struct treenode *temp;

	//Base case: return if the root is null.
	if (root == NULL)
	{
		return (NULL);
	}

	//Swap the left and right child pointers
	temp = root->left;
	root->left = root->right;
	root->right = temp;

	//Call invertTree on the left and right nodes
	invertTree(root->left);
	invertTree(root->right);

	return (root);
}
