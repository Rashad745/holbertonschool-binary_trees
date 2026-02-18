#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node
 * @func: function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Visit current node */
	func(tree->n);

	/* Traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
