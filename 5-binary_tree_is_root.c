#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 *
 * @node: Pointer to the node to be checked
 *
 *
 * Return: 1 if true; 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
		return (0);
	}
	else
		return (0);
}
