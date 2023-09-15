#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (parent == NULL)
		return (NULL);

	new_node_left = binary_tree_node(parent, value);
	if (new_node_left == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;
	}
	parent->left = new_node_left;

	return (NULL);
}
