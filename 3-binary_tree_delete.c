#include "binary_trees.h"

/**
 *binary_tree_delete - delete a node
 *@tree: a pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*First delete the left and right subtrees*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*Then delete the current node*/
	free(tree);
}
