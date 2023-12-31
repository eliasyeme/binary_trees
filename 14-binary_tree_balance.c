#include "binary_trees.h"

/**
	* binary_tree_balance - measures the balance factor of a binary tree.
	* @tree: pointer to the root node of the tree to measure the balance factor.
	*
	*	Return: balance factor on success
	*					0 otherwise
	*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
	* binary_tree_height - measures the height of a binary tree.
	* @tree: pointer to the root node of the binary tree to measure.
	*
	*	Return: height of the binary tree on success
	*					0 otherwise
	*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 1;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 1;

		if (left > right)
			return (left);
		else
			return (right);
	}

	return (0);
}
