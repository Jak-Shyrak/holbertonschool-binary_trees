#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the internal nodes in a binary tree.
 * @tree: A pointer to the root node of the tree to count the internal nodes.
 *Return: Number of internal nodes in the tree. If `tree` is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);

	return (1 + leftNodes + rightNodes);
}
