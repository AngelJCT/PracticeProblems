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
int heightBinaryTree(struct TreeNode *root);
int max(int x, int y, int z);
/**
 *diameterOfBinaryTree-function to find the lenght diameter of a binary tree
 *@root: pointer to head node
 *Return: lenght of diameter of tree
 */
int diameterOfBinaryTree(struct TreeNode* root)
{
	int left_diameter, right_diameter;
	int left_height, right_height;

	if (root == NULL)
	{
		return (0);
	}

	left_diameter = diameterOfBinaryTree(root->left);
	right_diameter = diameterOfBinaryTree(root->right);
	left_height = heightBinaryTree(root->left);
	right_height = heightBinaryTree(root->right);

	return (max(left_diameter, right_diameter, left_height + right_height));
}
/**
 *heightBinaryTree-function the calculate the height of a binary tree
 *@root: pointer to head node
 *Return: height of tree
 */
int heightBinaryTree(struct TreeNode *root)
{
	int left_height, right_height;

	if (root == NULL)
	{
		 return (0);
	}
	else
	{
		left_height = heightBinaryTree(root->left);
		right_height = heightBinaryTree(root->right);
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
/**
 *max-function to find the maximum value of three arguments
 *@x: first value
 *@y: second value
 *@z: third value
 *Return: maximum value
 */
/**
 *This max function takes three integers as arguments and returns the maximum of the three.
 *It works by initially setting the maximum value to the first argument, x, and then comparing y
 *and z to maximum one at a time. If either y or z is greater than maximum, maximum
 *is updated to the larger value.
 *Finally, the function returns the maximum value.
 */
int max(int x, int y, int z)
{
	int maximum = x;

	if (y > maximum)
	{
	    maximum = y;
	}
	if (z > maximum)
	{
	    maximum = z;
	}

	return (maximum);
}
/*In the diameter function, the max function is being used to find the maximum value of the three arguments passed to it: left_diameter, right_diameter, and left_height + right_height + 1.*/

//In the diameter function, the max function is used to find the maximum diameter of the
//left and right subtrees, as well as the sum of the left and right heights plus 1 to account
//for the current node. The maximum of these three values is returned as the diameter of
//the tree rooted at the current node.

/*This code defines two functions: diameter and height. The diameter function takes a pointer
 *to a node in the binary tree as a parameter and returns the diameter of the tree rooted at that node.
 *The diameter of a tree is defined as the number of nodes on the longest path between any two nodes
 *in the tree.
 */

/*The diameter function works by recursively calling itself on the left and right child nodes of
 * the current node. It then calculates the height of the left and right subtrees using the
 * height function, and returns the maximum of the left and right diameters, and the sum of the
 * left and right heights plus 1 to account for the current node.
 */

/*The height function calculates the height of a binary tree in a similar way, using recursion
 * to traverse the tree and returning the maximum of the left and right heights plus 1 to account
 * for the current node. If the node is NULL, the function returns 0. This is the base case that
 * stops the recursion.
 */
