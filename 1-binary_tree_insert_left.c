#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 * Return: Pointer to the new node // NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
		/*If left is NULL, create a new node and assign it to left child*/
		parent->left = binary_tree_node(parent, value);

	else
		return (NULL);

	return (parent->left);
}
