#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: balance factor of the tree
 *         0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h = 0;
	int r_h = 0;

	if (tree == NULL)
		return (0);

	l_h = (int)binary_tree_height(tree->left);
	r_h = (int)binary_tree_height(tree->right);
	return (l_h - r_h);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h = 0;
	size_t r_h = 0;

	if (tree == NULL)
		return (0);

	l_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (r_h > l_h ? r_h : l_h);
}
