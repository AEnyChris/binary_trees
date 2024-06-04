#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node to the right of parent node
 *
 * @parent: Pointer to the parent node
 * @value: value to be stored in the new node
 *
 * Return: Pointer to the newly created node NULL otherwise
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent)
	{
		new_node = binary_tree_node(parent, value);

		if (!new_node)
		{
			return (NULL);
		}
		new_node->left = NULL;
		new_node->right = parent->right;
		parent->right = new_node;
		if (new_node->right)
		{
			new_node->right->parent = new_node;
		}
	}
	else
		return (NULL);
	return (new_node);
}
