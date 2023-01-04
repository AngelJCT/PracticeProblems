#include <stddef.h>
struct node
{
  int value;
  struct node* left;
  struct node* right;
};
/**
 *sumTheTreeValues-function to sum all the values in a binary tree
 *@root: pointer to head node
 *Return: sum of all values
 */
int sumTheTreeValues(struct node *root)
{
	if (root == NULL)
		return (0);
	
	return (root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right));
}
