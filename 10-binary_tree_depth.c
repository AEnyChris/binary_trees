#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node or tree
 * @tree: Pointer to the node to measure the depth of
 *
 * Return: depth of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
