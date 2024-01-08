#include "binary_trees.h"

/**
 *binary_tree_is_root - checks if a node is a root
 *
 * Return:
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->parent == NULL);
}
