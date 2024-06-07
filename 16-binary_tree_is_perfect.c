#include "binary_trees.h"

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

	l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (r_h > l_h ? r_h : l_h);
}


/**
 * binary_tree_size - measures the size of a binary tree (number of nodes)
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}

/**
 * power - raises the base to the power of the index
 *
 * @base: the base
 * @index: the number to raise the base to
 *
 * Return: the power product of the base
 *         0 if it fails
 */
int power(int base, int index)
{
	int res;

	res = 1;

	while (index > 0)
	{
		res *= base;
		index -= 1;
	}

	return (res);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of tree
 *
 * Return: 1 if true
 *         0 otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	if (size == (power(2, (height + 1)) - 1))
			return (1);
	return (0);
}
