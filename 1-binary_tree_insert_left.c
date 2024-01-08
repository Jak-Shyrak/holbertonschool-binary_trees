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

	/*Call binary_tree_node to create a new node*/
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (NULL);
	}
	/*If the parent already has a left child...*/
	if (parent->left != NULL)
	{
		/*...make it the left child of the new node*/
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	/*Set the new node as the left child of the parent*/
	parent->left = new_node;

	return (new_node);
}
