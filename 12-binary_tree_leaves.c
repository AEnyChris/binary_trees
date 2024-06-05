#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 *
 * @tree: Pointer to the root node of tree
 *
 * Return: count-number of leaves
 *         0 if tree is NULL
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;
	size_t r;


	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}
