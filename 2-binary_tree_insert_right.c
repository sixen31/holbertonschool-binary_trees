#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_rigth;

	if (parent == NULL)
		return (NULL);

	new_node_rigth = binary_tree_node(parent, value);
	if (new_node_rigth == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node_rigth->right = parent->right;
		parent->right->parent = new_node_rigth;
	}
	parent->right = new_node_rigth;

	return (new_node_rigth);
}
