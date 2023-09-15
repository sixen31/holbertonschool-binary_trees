#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 *
 * This function calculates the balance factor of a binary tree, which is
 * defined as the difference between the height of the left subtree and the
 * height of the right subtree. A balance factor of 0 indicates a balanced
 * tree, while a positive or negative balance factor indicates an imbalance
 * with respect to the left or right subtree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = (int)binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = (int)binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
