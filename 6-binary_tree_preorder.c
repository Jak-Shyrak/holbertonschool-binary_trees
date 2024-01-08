void preOrderTraversal(struct TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}

	/* Process the current node */
	printf("%d ", root->data);

	// Recursively traverse the left subtree
	preOrderTraversal(root->left);

	// Recursively traverse the right subtree
	preOrderTraversal(root->right);
}
