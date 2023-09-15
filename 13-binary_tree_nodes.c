#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes in a binary tree
 * with at least one child
 * @tree: Pointer to the root node of the tree to count nodes in
 *
 * Return: Number of nodes in the tree, 0 if tree is NULL
 *
 * This function recursively counts the nodes in a binary tree
 * that have at least
 * one child (either left or right). It does not count leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nodes);
}
