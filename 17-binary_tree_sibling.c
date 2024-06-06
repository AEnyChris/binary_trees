#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: Pointer to node to find the sibling
 *
 * Return: Pointer to the sibling node
 *         NULL if parent or node is NULL
 *         NULL if node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->right == node)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	return (NULL);
}
