#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child of parent node
 * @parent: Pointer to the parent node of the child node
 * @value: Value to be added in the child node
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
