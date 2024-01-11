#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 * Return: Pointer to the new node // NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	/*Create a new node with the given value*/
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (NULL);
	}
	/*If the parent already has a right child...*/
	if (parent->right != NULL)
	{
		/*...update the new node's right child and its parent*/
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	/*Set the parent's right child to the new node.*/
	parent->right = new_node;

	return (new_node);
}
