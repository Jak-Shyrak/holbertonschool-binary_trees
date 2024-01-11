#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	/*Calculate the height of the left and right subtrees.*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/*If height of the left and right subtrees isn't equal, tree is not perfect.*/
	if (left_height != right_height)
		return (0);
	/*If the current node is a leaf, single-node tree considered perfect*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*Recursively check if both the left and right subtrees are perfect.*/
	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
