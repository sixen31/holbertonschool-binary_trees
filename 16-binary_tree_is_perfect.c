#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, return 1. Otherwise, return 0.
 *         If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth_left = 0, depth_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		depth_left = binary_tree_depth(tree->left);
		depth_right = binary_tree_depth(tree->right);

		if (depth_left == depth_right)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
