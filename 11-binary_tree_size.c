#include "binary_trees.h"
/**
 * binary_tree_size - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If `tree` is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t leftSize = binary_tree_size(tree->left);
	size_t rightSize = binary_tree_size(tree->right);

	return (1 + leftSize + rightSize);
}
