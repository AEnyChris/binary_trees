#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h = 0;
	int r_h = 0;

	if (tree == NULL)
		return (0);

	l_h = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r_h = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (l_h - r_h);
}
