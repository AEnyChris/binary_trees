#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to be checked
 *
 * Return: 1 if check is true
 *         0 otherwise or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		return (l && r);
	}
	if (!tree->left && !tree->right)
		return (1);

	return (0);
}
