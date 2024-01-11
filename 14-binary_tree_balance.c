#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	/*Calculate the height of the left and right subtrees.*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/*Increment height values to account for the root node.*/
	if (tree->left != NULL)
		left_height++;
	if (tree->right != NULL)
		right_height++;
	/*Return the difference between the height of the left and right subtrees.*/
	return (left_height - right_height);
}
