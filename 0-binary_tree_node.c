#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node
 *
 * @parent: Pointer to the parent node
 * @value: value to be stored in the new node
 *
 * Return: Pointer to the newly created node NULL otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node)
	{
		new_node->parent = parent;
		new_node->n = value;
	}
	else
		return (NULL);
	return (new_node);
}

