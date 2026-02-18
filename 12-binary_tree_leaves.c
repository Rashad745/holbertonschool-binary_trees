#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Sum leaves of left and right subtrees */
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}

