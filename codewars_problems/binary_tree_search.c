#include <stdbool.h>
#include <stddef.h>
struct node {
	int value;
	struct node *left, *right;
};
/**
 * search-check if a node exist in the tree
 * This algorithm is using depth-first search
 * @n: value of node to check
 * @root: pointer to root node of tree
 * Return: true if exist, false otherwise
 */
bool search(int n, const struct node *root)
{
	bool result1, result2;

	if (root == NULL)
		return (false);

	if (root->value == n)
		return (true);

	return (search(n, root->left) || search(n, root->right));
}
