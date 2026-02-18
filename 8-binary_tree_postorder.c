#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: pointer to the root node
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Visit current node */
	func(tree->n);
}
