#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 * Return: The number of leaves in the tree. If `tree` is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves, rightLeaves;

	if (tree == NULL)
		return (0);
	/*Check if the current node is a leaf (has no left and right children).*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*Recursively count the number of leaves in the left and right subtrees.*/
	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);
	/*Return the total number of leaves in the tree*/
	return (leftLeaves + rightLeaves);
}
