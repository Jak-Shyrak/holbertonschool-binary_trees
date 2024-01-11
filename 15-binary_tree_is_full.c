#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer on parent's adress
 * Return: counts the nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	/*Check if the current node is a leaf*/
	if (binary_tree_is_leaf(tree))
		return (1);
	/*Recursively check if the left and right subtrees are full.*/
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	/*If either the left or right subtree is not full, return 0.*/
	if (left == 0 || right == 0)
		return (0);
	/*If both left and right subtrees are full, return 1.*/
	return (1);
}
