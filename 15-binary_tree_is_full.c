#include "binary_trees.h"

/**
	* walk - checks if a binary tree is full.
	* @tree: pointer to the root node of the tree to check.
	*
	*	Return: 1 if tree null
	*					0 otherwise
	*/
int walk(const binary_tree_t *tree)
{
	if (tree)
		if ((tree->left && !tree->right) || (!tree->left && tree->right) ||
			!walk(tree->left) || !walk(tree->right))
			return (0);

	return (1);
}

/**
	* binary_tree_is_full - checks if a binary tree is full.
	* @tree: pointer to the root node of the tree to check.
	*
	*	Return: 1 if full
	*					0 otherwise
	*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (walk(tree));
}
