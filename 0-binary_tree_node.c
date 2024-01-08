#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 * Return: Pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/*Exit condition if malloc failed*/
	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	/*Set the value of the new node*/
	new_node->n = value;
	/*Set the parent pointer of the new node*/
	new_node->parent = parent;
	/*Initialize left and right children pointers to NULL*/
	new_node->left = new_node->right = NULL;
	return (new_node);
}
