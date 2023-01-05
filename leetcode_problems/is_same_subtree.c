#include <stdbool.h>
#include <stddef.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool is_same(struct TreeNode *tree1, struct TreeNode *tree2);
/**
 *isSubtree-check if a subtree of root have the same structure and value of another tree
 *@root: pointer to root node of first tree
 *@subRoot: pointer to root node of second tree
 *Return: true if both trees are the same, false otherwise
 */
bool isSubtree(struct TreeNode *root, struct TreeNode *subRoot)
{
	if (root == NULL || subRoot == NULL)
		return (false);

	if (root->val == subRoot->val && is_same(root, subRoot))
		return (true);

	return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
}
/**
 *is_same-check if two binary trees have the same structure and values
 *@tree1: pointer to the root node of the first tree
 *@tree2: pointer to the root node of the second tree
 *Return: true if the trees are the same, false otherwise
 */
bool is_same(struct TreeNode *tree1, struct TreeNode *tree2)
{
	if (tree1 == NULL && tree2 == NULL)
		return (true);

	if (tree1 == NULL || tree2 == NULL || tree1->val != tree2->val)
		return (false);

	return (is_same(tree1->left, tree2->left) && is_same(tree1->right, tree2->right));
}
