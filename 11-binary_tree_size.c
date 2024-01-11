#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The size of the tree. If `tree` is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;

	if (tree == NULL)
		return (0);
	/*Recursively calculate the size of the left and right subtrees.*/
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);
	/**
	 * total size of the tree, which is the sum of the sizes
	 * of the left and right subtrees plus 1 for the current node.
	 */
	return (1 + leftSize + rightSize);
}
