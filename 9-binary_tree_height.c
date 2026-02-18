#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0); /* Leaf node has height 0 */

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the larger height + 1 for the edge to child */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
