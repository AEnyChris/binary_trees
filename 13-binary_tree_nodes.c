#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 *
 * @tree: Pointer to the root node of tree
 *
 * Return: count-number of nodes
 *         0 if tree is NULL
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l;
	size_t r;
	size_t root;

	if (!tree)
		return (0);

	root = ((tree->right || tree->left)? 1 : 0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	return (l + r + root);
}
