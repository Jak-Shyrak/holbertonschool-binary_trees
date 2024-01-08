#include "binary_trees.h"

/**
 *binary_tree_delete - delete a node
 *@parent: pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 * Return: Pointer to the new node // NULL on failure or if parent is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	// First delete the left and right subtrees
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	// Then delete the current node
	free(tree);
}