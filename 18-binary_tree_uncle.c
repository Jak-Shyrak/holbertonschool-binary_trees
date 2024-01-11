#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, NULL if node is NULL or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	/*Check if the parent of the node is the left child of its grandparent.*/
	if (node->parent->parent->left == node->parent)
	/*If so, return the right child of the grandparent as the uncle*/
		return (node->parent->parent->right);
	/*Check if the parent of the node is the right child of its grandparent.*/
	else if (node->parent->parent->right == node->parent)
	/*If so, return the left child of the grandparent as the uncle.*/
		return (node->parent->parent->left);
	/*If neither condition is met, return NULL as the uncle is undefined.*/
	return (NULL);
}
