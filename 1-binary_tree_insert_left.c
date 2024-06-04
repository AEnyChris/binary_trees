#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new node to the left of parent node
 *
 * @parent: Pointer to the parent node
 * @value: value to be stored in the new node
 *
 * Return: Pointer to the newly created node NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent)
	{
		new_node = binary_tree_node(parent, value);

		if (!new_node)
		{
			return (NULL);
		}
		new_node->right = NULL;
		new_node->left = parent->left;
		parent->left = new_node;
		if (new_node->left)
		{
			new_node->left->parent = new_node;
		}
	}
	else
		return (NULL);
	return (new_node);
}
