#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: Pointer to node to find the uncle
 *
 * Return: Pointer to the uncle node
 *         NULL if parent or node is NULL
 *         NULL if node has no sibling
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->parent)
	{
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		return (node->parent->parent->right);
	}
	return (NULL);
}
