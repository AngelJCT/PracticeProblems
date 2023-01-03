/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode *root);
/**
 *isBalanaced-function to check if binary tree is height-balanced
 *@root: pointer to head node
 *Return: true if its balanced, false otherwise
 */
bool isBalanced(struct TreeNode* root)
{
	int left_height, right_height, height_diff;

	if (root == NULL)
	{
		return (true);
	}
	else
	{
		//calculating the height of left and right subtrees.
		left_height = height(root->left);
		right_height = height(root->right);
		height_diff = abs(left_height - right_height);
		//If the difference between the heights of the left and right subtrees is greater than 1,
		//return false.
		if (height_diff > 1)
		{
			return (false);
		}
		else
		{
			return (isBalanced(root->left) && isBalanced(root->right));
		}
	}
}
/**
 *height-function to calculate the height of a binary tree
 *@root: pointer to head node
 *Return: height of tree
 */
int height(struct TreeNode *root)
{
	int left_height, right_height;

	if (root == NULL)
	{
	    return (0);
	}
	else
	{
		left_height = height(root->left);
		right_height = height(root->right);
		if (left_height > right_height)
		{
		    return (left_height + 1);
		}
		else
		{
		    return (right_height + 1);
		}
	}
}
