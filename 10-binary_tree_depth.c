#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node, 0 if node is NULL
 *
 * This function calculates the depth of a node in a binary tree, which is the
 * number of edges between the node and the tree's root. It does this by
 * traversing the parent pointers from the given node up to the root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
