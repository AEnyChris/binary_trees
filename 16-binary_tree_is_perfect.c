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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to the root of the tree to be checked
 *
 * Return: 1 if check is true
 *         0 otherwise or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) && (binary_tree_balance(tree) == 0))
		return (1);

	return (0);
}
