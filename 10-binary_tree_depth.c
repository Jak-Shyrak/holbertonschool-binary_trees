#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: The depth of the node. If `tree` is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0; /*Variable to measure depth*/

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++; /*Increment the depth for each level.*/
		tree = tree->parent; /*Move to the parent node in the tree.*/
	}

	return (depth);
}
