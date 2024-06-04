#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks a node if a leaf
 *
 * @node: Pointer to the node to be checked
 *
 *
 * Return: 1 if true; 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->right || node->left)
			return (0);
		return (1);
	}
	else
		return (0);
}
