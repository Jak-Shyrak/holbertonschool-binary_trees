#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL if parent or node is NULL and if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/*Check if the node is the left child of its parent.*/
	if (node->parent->left == node)
		return (node->parent->right);
	/*Check if the node is the right child of its parent.*/
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
