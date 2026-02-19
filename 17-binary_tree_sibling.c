#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if:
 * - node is NULL
 * - parent is NULL
 * - node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child (even if NULL) */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child (even if NULL) */
	return (node->parent->left);
}
