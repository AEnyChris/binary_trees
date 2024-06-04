#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree in pre-orderly
 *
 * @tree: Pointer to the root node of tree
 * @func: Pointer to a function to call on the values of nodes
 *
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
