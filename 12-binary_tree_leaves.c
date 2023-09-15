#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves in
 *
 * Return: Number of leaves in the tree, 0 if tree is NULL
 *
 * This function recursively counts the leaves in a binary tree. Leaves are
 * nodes with no children (both left and right pointers are NULL).
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
