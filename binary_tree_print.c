#include <stdio.h>
#include "binary_trees.h"

void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;

    if (tree->right)
    {
        binary_tree_print(tree->right);
        printf("      ");
    }

    printf("%d\n", tree->n);

    if (tree->left)
    {
        binary_tree_print(tree->left);
        printf("      ");
    }
}
